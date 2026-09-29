# Turok: Rage Wars (N64) matching decompilation, over every released cartridge.
#
# This file forwards to the decompilation toolkit, which holds the build graph. The project is
# described by config.toml in this directory and by nothing else: no build logic, no copy of the
# toolkit and no environment variable lives here. Run `decomp --help` for the goals below and for
# the ones this file does not forward.
#
#   make bootstrap  create artifacts/toolchain/ and artifacts/roms/ and say what belongs in each
#   make setup      check the toolchain you supplied and create the Python environments
#   make            extract, compile, link and verify the ROM against its checksums
#   make check      the per-landing gate: real C, selection, measurement, game checks
#   make test       this project's own controls; it keeps none, so it says so and passes
#   make progress   matching-C and real-code shares, by size band
#   make readme     rewrite README.md, the decomp.dev progress reports and their workflow
#   make decomp-yaml  rewrite decomp.yaml from config.toml
#   make versions   list the cartridges this project describes
#
# VERSION picks a cartridge; left unset, config.toml's reference is used, so the choice stays a
# project fact rather than a default written here.
SHELL := /bin/sh
.DEFAULT_GOAL := build

ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

# The toolkit is installed, not vendored. Refuse by name when it is not on PATH rather than let a
# goal fail somewhere inside make with nothing pointing at the cause.
#
# The refusal says what to do, because the shape of this mistake is specific: every goal below runs
# as the `decomp` command, so a shell that can import the toolkit is not a shell that can run it, and
# PYTHONPATH is what people reach for. A landing whose gate refused this way once had the refusal
# charged to the function it was landing, so the message naming only the problem cost an attempt.
DECOMP := $(shell command -v decomp 2>/dev/null)
ifeq ($(strip $(DECOMP)),)
$(error HELD(toolkit): `decomp` is not on PATH. Every goal here runs it as a command, so install the decompilation toolkit into the interpreter that will run it -- `pip install -e <toolkit checkout>` -- or put its console scripts on PATH. PYTHONPATH alone is not enough: it makes the toolkit importable, not runnable)
endif

# VERSION is passed only when the caller set it, so an unset VERSION reaches the toolkit as absent
# and it reads the reference out of config.toml.
VERSION_ARG := $(if $(strip $(VERSION)),--version $(VERSION),)

GOALS := bootstrap setup build check test progress readme development decomp-yaml versions \
         cartridge-differences clean distclean
.PHONY: $(GOALS)

$(GOALS):
	@$(DECOMP) --project $(ROOT) $(VERSION_ARG) $@
