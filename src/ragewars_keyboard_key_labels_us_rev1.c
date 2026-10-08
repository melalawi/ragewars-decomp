/* Name-entry keyboard key strings and the text-pointer slots that the
 * resident menu forwards through 8044208C. Each observed record is eight
 * bytes; its pointer at +4 addresses its own NUL-terminated key string.
 * Two-byte strings have the normal pointer-alignment gap, with no
 * explicit padding field or raw address initializer. */
struct ResidentKeyboardKeyLabel {
    char text[2];
    char *displayText;
};
typedef char keyboard_record_size[(sizeof(struct ResidentKeyboardKeyLabel) == 8) ? 1 : -1];
struct ResidentKeyboardKeyLabel ragewars_keyboard_key_labels_us_rev1[40] = {
    {{'A', 0}, ragewars_keyboard_key_labels_us_rev1[0].text},
    {{'B', 0}, ragewars_keyboard_key_labels_us_rev1[1].text},
    {{'C', 0}, ragewars_keyboard_key_labels_us_rev1[2].text},
    {{'D', 0}, ragewars_keyboard_key_labels_us_rev1[3].text},
    {{'E', 0}, ragewars_keyboard_key_labels_us_rev1[4].text},
    {{'F', 0}, ragewars_keyboard_key_labels_us_rev1[5].text},
    {{'G', 0}, ragewars_keyboard_key_labels_us_rev1[6].text},
    {{'H', 0}, ragewars_keyboard_key_labels_us_rev1[7].text},
    {{'I', 0}, ragewars_keyboard_key_labels_us_rev1[8].text},
    {{'J', 0}, ragewars_keyboard_key_labels_us_rev1[9].text},
    {{'K', 0}, ragewars_keyboard_key_labels_us_rev1[10].text},
    {{'L', 0}, ragewars_keyboard_key_labels_us_rev1[11].text},
    {{'M', 0}, ragewars_keyboard_key_labels_us_rev1[12].text},
    {{'N', 0}, ragewars_keyboard_key_labels_us_rev1[13].text},
    {{'O', 0}, ragewars_keyboard_key_labels_us_rev1[14].text},
    {{'P', 0}, ragewars_keyboard_key_labels_us_rev1[15].text},
    {{'Q', 0}, ragewars_keyboard_key_labels_us_rev1[16].text},
    {{'R', 0}, ragewars_keyboard_key_labels_us_rev1[17].text},
    {{'S', 0}, ragewars_keyboard_key_labels_us_rev1[18].text},
    {{'T', 0}, ragewars_keyboard_key_labels_us_rev1[19].text},
    {{'U', 0}, ragewars_keyboard_key_labels_us_rev1[20].text},
    {{'V', 0}, ragewars_keyboard_key_labels_us_rev1[21].text},
    {{'W', 0}, ragewars_keyboard_key_labels_us_rev1[22].text},
    {{'X', 0}, ragewars_keyboard_key_labels_us_rev1[23].text},
    {{'Y', 0}, ragewars_keyboard_key_labels_us_rev1[24].text},
    {{'Z', 0}, ragewars_keyboard_key_labels_us_rev1[25].text},
    {{'0', 0}, ragewars_keyboard_key_labels_us_rev1[26].text},
    {{'1', 0}, ragewars_keyboard_key_labels_us_rev1[27].text},
    {{'2', 0}, ragewars_keyboard_key_labels_us_rev1[28].text},
    {{'3', 0}, ragewars_keyboard_key_labels_us_rev1[29].text},
    {{'4', 0}, ragewars_keyboard_key_labels_us_rev1[30].text},
    {{'5', 0}, ragewars_keyboard_key_labels_us_rev1[31].text},
    {{'6', 0}, ragewars_keyboard_key_labels_us_rev1[32].text},
    {{'7', 0}, ragewars_keyboard_key_labels_us_rev1[33].text},
    {{'8', 0}, ragewars_keyboard_key_labels_us_rev1[34].text},
    {{'9', 0}, ragewars_keyboard_key_labels_us_rev1[35].text},
    {{2, 0}, ragewars_keyboard_key_labels_us_rev1[36].text},
    {{3, 0}, ragewars_keyboard_key_labels_us_rev1[37].text},
    {{4, 0}, ragewars_keyboard_key_labels_us_rev1[38].text},
    {{0, 0}, ragewars_keyboard_key_labels_us_rev1[39].text},
};
