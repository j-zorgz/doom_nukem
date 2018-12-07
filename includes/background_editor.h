#ifndef BACKGROUND_EDITOR_H
# define BACKGROUND_EDITOR_H

# include <editor.h>
# include <doom_nukem.h>

# define ARROW_LEFT 0
# define ARROW_RIGHT 1

# define SQUARE_ACTION_SIDE 70

# define SQUARE_SELECT_SX 1128
# define SQUARE_SELECT_SY 222
# define SQUARE_SELECT_EX SQUARE_SELECT_SX + SQUARE_ACTION_SIDE
# define SQUARE_SELECT_EY SQUARE_SELECT_SY + SQUARE_ACTION_SIDE

# define SQUARE_MOVE_SX 1239
# define SQUARE_MOVE_SY 222
# define SQUARE_MOVE_EX SQUARE_MOVE_SX + SQUARE_ACTION_SIDE
# define SQUARE_MOVE_EY SQUARE_MOVE_SY + SQUARE_ACTION_SIDE

# define SQUARE_DELETE_SX 1352
# define SQUARE_DELETE_SY 222
# define SQUARE_DELETE_EX SQUARE_DELETE_SX + SQUARE_ACTION_SIDE
# define SQUARE_DELETE_EY SQUARE_DELETE_SY + SQUARE_ACTION_SIDE

# define SQUARE_SAVE_SX 1466
# define SQUARE_SAVE_SY 222
# define SQUARE_SAVE_EX SQUARE_SAVE_SX + SQUARE_ACTION_SIDE
# define SQUARE_SAVE_EY SQUARE_SAVE_SY + SQUARE_ACTION_SIDE

# define SQUARE_DRAW_SX 1148
# define SQUARE_DRAW_SY 372
# define SQUARE_DRAW_EX SQUARE_DRAW_SX + SQUARE_ACTION_SIDE
# define SQUARE_DRAW_EY SQUARE_DRAW_SY + SQUARE_ACTION_SIDE

# define ARROW_GAP 105
# define ARROW_SIDE 16
# define TEXTURE_POS_X 26
# define TEXTURE_POS_Y -26

# define SECTOR_NUM_X 1296
# define SECTOR_NUM_Y 695

# define UP_LEFT_ARROW_X 1128
# define UP_LEFT_ARROW_Y 526
# define UP_LEFT_ARROW_SX UP_LEFT_ARROW_X
# define UP_LEFT_ARROW_SY UP_LEFT_ARROW_Y - ARROW_SIDE / 2
# define UP_LEFT_ARROW_EX UP_LEFT_ARROW_X + ARROW_SIDE
# define UP_LEFT_ARROW_EY UP_LEFT_ARROW_Y + ARROW_SIDE / 2
# define UP_RIGHT_ARROW_X UP_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE)
# define UP_RIGHT_ARROW_Y UP_LEFT_ARROW_Y
# define UP_RIGHT_ARROW_SX UP_RIGHT_ARROW_X
# define UP_RIGHT_ARROW_SY UP_RIGHT_ARROW_Y - ARROW_SIDE / 2
# define UP_RIGHT_ARROW_EX UP_RIGHT_ARROW_X + ARROW_SIDE
# define UP_RIGHT_ARROW_EY UP_RIGHT_ARROW_Y + ARROW_SIDE / 2
# define UP_TEXTURE_X UP_LEFT_ARROW_X + TEXTURE_POS_X
# define UP_TEXTURE_Y UP_LEFT_ARROW_Y + TEXTURE_POS_Y

# define DOWN_LEFT_ARROW_X 1277
# define DOWN_LEFT_ARROW_Y 526
# define DOWN_LEFT_ARROW_SX DOWN_LEFT_ARROW_X
# define DOWN_LEFT_ARROW_SY DOWN_LEFT_ARROW_Y - ARROW_SIDE / 2
# define DOWN_LEFT_ARROW_EX DOWN_LEFT_ARROW_X + ARROW_SIDE
# define DOWN_LEFT_ARROW_EY DOWN_LEFT_ARROW_Y + ARROW_SIDE / 2
# define DOWN_RIGHT_ARROW_X DOWN_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE)
# define DOWN_RIGHT_ARROW_Y DOWN_LEFT_ARROW_Y
# define DOWN_RIGHT_ARROW_SX DOWN_RIGHT_ARROW_X
# define DOWN_RIGHT_ARROW_SY DOWN_RIGHT_ARROW_Y - ARROW_SIDE / 2
# define DOWN_RIGHT_ARROW_EX DOWN_RIGHT_ARROW_X + ARROW_SIDE
# define DOWN_RIGHT_ARROW_EY DOWN_RIGHT_ARROW_Y + ARROW_SIDE / 2
# define DOWN_TEXTURE_X DOWN_LEFT_ARROW_X + TEXTURE_POS_X
# define DOWN_TEXTURE_Y DOWN_LEFT_ARROW_Y + TEXTURE_POS_Y

# define WALL_LEFT_ARROW_X 1426
# define WALL_LEFT_ARROW_Y 526
# define WALL_LEFT_ARROW_SX WALL_LEFT_ARROW_X
# define WALL_LEFT_ARROW_SY WALL_LEFT_ARROW_Y - ARROW_SIDE / 2
# define WALL_LEFT_ARROW_EX WALL_LEFT_ARROW_X + ARROW_SIDE
# define WALL_LEFT_ARROW_EY WALL_LEFT_ARROW_Y + ARROW_SIDE / 2
# define WALL_RIGHT_ARROW_SX (WALL_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE))
# define WALL_RIGHT_ARROW_SY (WALL_LEFT_ARROW_Y) - ARROW_SIDE / 2
# define WALL_RIGHT_ARROW_EX (WALL_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE)) + ARROW_SIDE
# define WALL_RIGHT_ARROW_EY (WALL_LEFT_ARROW_Y) + ARROW_SIDE / 2
# define WALL_TEXTURE_X WALL_LEFT_ARROW_X + TEXTURE_POS_X
# define WALL_TEXTURE_Y WALL_LEFT_ARROW_Y + TEXTURE_POS_Y

# define LIGHT_LEFT_ARROW_X 1426
# define LIGHT_LEFT_ARROW_Y 705
# define LIGHT_LEFT_ARROW_SX LIGHT_LEFT_ARROW_X
# define LIGHT_LEFT_ARROW_SY LIGHT_LEFT_ARROW_Y - ARROW_SIDE / 2
# define LIGHT_LEFT_ARROW_EX LIGHT_LEFT_ARROW_X + ARROW_SIDE
# define LIGHT_LEFT_ARROW_EY LIGHT_LEFT_ARROW_Y + ARROW_SIDE / 2
# define LIGHT_RIGHT_ARROW_SX (LIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE))
# define LIGHT_RIGHT_ARROW_SY (LIGHT_LEFT_ARROW_Y) - ARROW_SIDE / 2
# define LIGHT_RIGHT_ARROW_EX (LIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE)) + ARROW_SIDE
# define LIGHT_RIGHT_ARROW_EY (LIGHT_LEFT_ARROW_Y) + ARROW_SIDE / 2
# define LIGHT_VALUE_X LIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE) / 2 - 3
# define LIGHT_VALUE_Y LIGHT_LEFT_ARROW_Y - 10

# define CEIL_TEXT_LEFT_ARROW_X 1416
# define CEIL_TEXT_LEFT_ARROW_Y 829
# define CEIL_TEXT_LEFT_ARROW_SX CEIL_TEXT_LEFT_ARROW_X
# define CEIL_TEXT_LEFT_ARROW_SY CEIL_TEXT_LEFT_ARROW_Y - ARROW_SIDE / 2
# define CEIL_TEXT_LEFT_ARROW_EX CEIL_TEXT_LEFT_ARROW_X + ARROW_SIDE
# define CEIL_TEXT_LEFT_ARROW_EY CEIL_TEXT_LEFT_ARROW_Y + ARROW_SIDE / 2
# define CEIL_TEXT_RIGHT_ARROW_SX (CEIL_TEXT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE))
# define CEIL_TEXT_RIGHT_ARROW_SY (CEIL_TEXT_LEFT_ARROW_Y) - ARROW_SIDE / 2
# define CEIL_TEXT_RIGHT_ARROW_EX (CEIL_TEXT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE)) + ARROW_SIDE
# define CEIL_TEXT_RIGHT_ARROW_EY (CEIL_TEXT_LEFT_ARROW_Y) + ARROW_SIDE / 2
# define CEIL_TEXT_TEXTURE_X CEIL_TEXT_LEFT_ARROW_X + TEXTURE_POS_X
# define CEIL_TEXT_TEXTURE_Y CEIL_TEXT_LEFT_ARROW_Y + TEXTURE_POS_Y

# define CEIL_HEIGHT_LEFT_ARROW_X 1282
# define CEIL_HEIGHT_LEFT_ARROW_Y 829
# define CEIL_HEIGHT_LEFT_ARROW_SX CEIL_HEIGHT_LEFT_ARROW_X
# define CEIL_HEIGHT_LEFT_ARROW_SY CEIL_HEIGHT_LEFT_ARROW_Y - ARROW_SIDE / 2
# define CEIL_HEIGHT_LEFT_ARROW_EX CEIL_HEIGHT_LEFT_ARROW_X + ARROW_SIDE
# define CEIL_HEIGHT_LEFT_ARROW_EY CEIL_HEIGHT_LEFT_ARROW_Y + ARROW_SIDE / 2
# define CEIL_HEIGHT_RIGHT_ARROW_SX (CEIL_HEIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE))
# define CEIL_HEIGHT_RIGHT_ARROW_SY (CEIL_HEIGHT_LEFT_ARROW_Y) - ARROW_SIDE / 2
# define CEIL_HEIGHT_RIGHT_ARROW_EX (CEIL_HEIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE)) + ARROW_SIDE
# define CEIL_HEIGHT_RIGHT_ARROW_EY (CEIL_HEIGHT_LEFT_ARROW_Y) + ARROW_SIDE / 2
# define CEIL_HEIGHT_VALUE_X CEIL_HEIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE) / 2 - 3
# define CEIL_HEIGHT_VALUE_Y CEIL_HEIGHT_LEFT_ARROW_Y - 10

# define FLOOR_TEXT_LEFT_ARROW_X 1416
# define FLOOR_TEXT_LEFT_ARROW_Y 955
# define FLOOR_TEXT_LEFT_ARROW_SX FLOOR_TEXT_LEFT_ARROW_X
# define FLOOR_TEXT_LEFT_ARROW_SY FLOOR_TEXT_LEFT_ARROW_Y - ARROW_SIDE / 2
# define FLOOR_TEXT_LEFT_ARROW_EX FLOOR_TEXT_LEFT_ARROW_X + ARROW_SIDE
# define FLOOR_TEXT_LEFT_ARROW_EY FLOOR_TEXT_LEFT_ARROW_Y + ARROW_SIDE / 2
# define FLOOR_TEXT_RIGHT_ARROW_SX (FLOOR_TEXT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE))
# define FLOOR_TEXT_RIGHT_ARROW_SY (FLOOR_TEXT_LEFT_ARROW_Y) - ARROW_SIDE / 2
# define FLOOR_TEXT_RIGHT_ARROW_EX (FLOOR_TEXT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE)) + ARROW_SIDE
# define FLOOR_TEXT_RIGHT_ARROW_EY (FLOOR_TEXT_LEFT_ARROW_Y) + ARROW_SIDE / 2
# define FLOOR_TEXT_TEXTURE_X FLOOR_TEXT_LEFT_ARROW_X + TEXTURE_POS_X
# define FLOOR_TEXT_TEXTURE_Y FLOOR_TEXT_LEFT_ARROW_Y + TEXTURE_POS_Y

# define FLOOR_HEIGHT_LEFT_ARROW_X 1276
# define FLOOR_HEIGHT_LEFT_ARROW_Y 955
# define FLOOR_HEIGHT_LEFT_ARROW_SX FLOOR_HEIGHT_LEFT_ARROW_X
# define FLOOR_HEIGHT_LEFT_ARROW_SY FLOOR_HEIGHT_LEFT_ARROW_Y - ARROW_SIDE / 2
# define FLOOR_HEIGHT_LEFT_ARROW_EX FLOOR_HEIGHT_LEFT_ARROW_X + ARROW_SIDE
# define FLOOR_HEIGHT_LEFT_ARROW_EY FLOOR_HEIGHT_LEFT_ARROW_Y + ARROW_SIDE / 2
# define FLOOR_HEIGHT_RIGHT_ARROW_SX (FLOOR_HEIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE))
# define FLOOR_HEIGHT_RIGHT_ARROW_SY (FLOOR_HEIGHT_LEFT_ARROW_Y) - ARROW_SIDE / 2
# define FLOOR_HEIGHT_RIGHT_ARROW_EX (FLOOR_HEIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE)) + ARROW_SIDE
# define FLOOR_HEIGHT_RIGHT_ARROW_EY (FLOOR_HEIGHT_LEFT_ARROW_Y) + ARROW_SIDE / 2
# define FLOOR_HEIGHT_VALUE_X FLOOR_HEIGHT_LEFT_ARROW_X + (ARROW_GAP - ARROW_SIDE) / 2 - 3
# define FLOOR_HEIGHT_VALUE_Y FLOOR_HEIGHT_LEFT_ARROW_Y - 10

# define SMALL_ARROW_GAP 82
# define SMALL_ARROW_SIDE 8

# define SMALL_X_CEIL_LEFT_ARROW_X 1159
# define SMALL_X_CEIL_LEFT_ARROW_Y 824
# define SMALL_X_CEIL_LEFT_ARROW_SX SMALL_X_CEIL_LEFT_ARROW_X
# define SMALL_X_CEIL_LEFT_ARROW_SY SMALL_X_CEIL_LEFT_ARROW_Y - SMALL_ARROW_SIDE / 2
# define SMALL_X_CEIL_LEFT_ARROW_EX SMALL_X_CEIL_LEFT_ARROW_X + SMALL_ARROW_SIDE
# define SMALL_X_CEIL_LEFT_ARROW_EY SMALL_X_CEIL_LEFT_ARROW_Y + SMALL_ARROW_SIDE / 2
# define SMALL_X_CEIL_RIGHT_ARROW_SX (SMALL_X_CEIL_LEFT_ARROW_X + SMALL_ARROW_GAP - SMALL_ARROW_SIDE)
# define SMALL_X_CEIL_RIGHT_ARROW_SY (SMALL_X_CEIL_LEFT_ARROW_Y) - SMALL_ARROW_SIDE / 2
# define SMALL_X_CEIL_RIGHT_ARROW_EX (SMALL_X_CEIL_LEFT_ARROW_X + (SMALL_ARROW_GAP - SMALL_ARROW_SIDE)) + SMALL_ARROW_SIDE
# define SMALL_X_CEIL_RIGHT_ARROW_EY (SMALL_X_CEIL_LEFT_ARROW_Y) + SMALL_ARROW_SIDE / 2
# define SMALL_X_CEIL_VALUE_X SMALL_X_CEIL_LEFT_ARROW_X + SMALL_ARROW_GAP / 2 - 5
# define SMALL_X_CEIL_VALUE_Y SMALL_X_CEIL_LEFT_ARROW_Y - 10

# define SMALL_Y_CEIL_LEFT_ARROW_X 1159
# define SMALL_Y_CEIL_LEFT_ARROW_Y 843
# define SMALL_Y_CEIL_LEFT_ARROW_SX SMALL_Y_CEIL_LEFT_ARROW_X
# define SMALL_Y_CEIL_LEFT_ARROW_SY SMALL_Y_CEIL_LEFT_ARROW_Y - SMALL_ARROW_SIDE / 2
# define SMALL_Y_CEIL_LEFT_ARROW_EX SMALL_Y_CEIL_LEFT_ARROW_X + SMALL_ARROW_SIDE
# define SMALL_Y_CEIL_LEFT_ARROW_EY SMALL_Y_CEIL_LEFT_ARROW_Y + SMALL_ARROW_SIDE / 2
# define SMALL_Y_CEIL_RIGHT_ARROW_SX (SMALL_Y_CEIL_LEFT_ARROW_X + (SMALL_ARROW_GAP - SMALL_ARROW_SIDE))
# define SMALL_Y_CEIL_RIGHT_ARROW_SY (SMALL_Y_CEIL_LEFT_ARROW_Y) - SMALL_ARROW_SIDE / 2
# define SMALL_Y_CEIL_RIGHT_ARROW_EX (SMALL_Y_CEIL_LEFT_ARROW_X + (SMALL_ARROW_GAP - SMALL_ARROW_SIDE)) + SMALL_ARROW_SIDE
# define SMALL_Y_CEIL_RIGHT_ARROW_EY (SMALL_Y_CEIL_LEFT_ARROW_Y) + SMALL_ARROW_SIDE / 2
# define SMALL_Y_CEIL_VALUE_X SMALL_Y_CEIL_LEFT_ARROW_X + SMALL_ARROW_GAP / 2 - 5
# define SMALL_Y_CEIL_VALUE_Y SMALL_Y_CEIL_LEFT_ARROW_Y - 10

# define SMALL_X_FLOOR_LEFT_ARROW_X 1159
# define SMALL_X_FLOOR_LEFT_ARROW_Y 951
# define SMALL_X_FLOOR_LEFT_ARROW_SX SMALL_X_FLOOR_LEFT_ARROW_X
# define SMALL_X_FLOOR_LEFT_ARROW_SY SMALL_X_FLOOR_LEFT_ARROW_Y - SMALL_ARROW_SIDE / 2
# define SMALL_X_FLOOR_LEFT_ARROW_EX SMALL_X_FLOOR_LEFT_ARROW_X + SMALL_ARROW_SIDE
# define SMALL_X_FLOOR_LEFT_ARROW_EY SMALL_X_FLOOR_LEFT_ARROW_Y + SMALL_ARROW_SIDE / 2
# define SMALL_X_FLOOR_RIGHT_ARROW_SX (SMALL_X_FLOOR_LEFT_ARROW_X + (SMALL_ARROW_GAP - SMALL_ARROW_SIDE))
# define SMALL_X_FLOOR_RIGHT_ARROW_SY (SMALL_X_FLOOR_LEFT_ARROW_Y) - SMALL_ARROW_SIDE / 2
# define SMALL_X_FLOOR_RIGHT_ARROW_EX (SMALL_X_FLOOR_LEFT_ARROW_X + (SMALL_ARROW_GAP - SMALL_ARROW_SIDE)) + SMALL_ARROW_SIDE
# define SMALL_X_FLOOR_RIGHT_ARROW_EY (SMALL_X_FLOOR_LEFT_ARROW_Y) + SMALL_ARROW_SIDE / 2
# define SMALL_X_FLOOR_VALUE_X SMALL_X_FLOOR_LEFT_ARROW_X + SMALL_ARROW_GAP / 2 - 5
# define SMALL_X_FLOOR_VALUE_Y SMALL_X_FLOOR_LEFT_ARROW_Y - 10

# define SMALL_Y_FLOOR_LEFT_ARROW_X 1159
# define SMALL_Y_FLOOR_LEFT_ARROW_Y 971
# define SMALL_Y_FLOOR_LEFT_ARROW_SX SMALL_Y_FLOOR_LEFT_ARROW_X
# define SMALL_Y_FLOOR_LEFT_ARROW_SY SMALL_Y_FLOOR_LEFT_ARROW_Y - SMALL_ARROW_SIDE / 2
# define SMALL_Y_FLOOR_LEFT_ARROW_EX SMALL_Y_FLOOR_LEFT_ARROW_X + SMALL_ARROW_SIDE
# define SMALL_Y_FLOOR_LEFT_ARROW_EY SMALL_Y_FLOOR_LEFT_ARROW_Y + SMALL_ARROW_SIDE / 2
# define SMALL_Y_FLOOR_RIGHT_ARROW_SX (SMALL_Y_FLOOR_LEFT_ARROW_X + (SMALL_ARROW_GAP - SMALL_ARROW_SIDE))
# define SMALL_Y_FLOOR_RIGHT_ARROW_SY (SMALL_Y_FLOOR_LEFT_ARROW_Y) - SMALL_ARROW_SIDE / 2
# define SMALL_Y_FLOOR_RIGHT_ARROW_EX (SMALL_Y_FLOOR_LEFT_ARROW_X + (SMALL_ARROW_GAP - SMALL_ARROW_SIDE)) + SMALL_ARROW_SIDE
# define SMALL_Y_FLOOR_RIGHT_ARROW_EY (SMALL_Y_FLOOR_LEFT_ARROW_Y) + SMALL_ARROW_SIDE / 2
# define SMALL_Y_FLOOR_VALUE_X SMALL_Y_FLOOR_LEFT_ARROW_X + SMALL_ARROW_GAP / 2 - 5
# define SMALL_Y_FLOOR_VALUE_Y SMALL_Y_FLOOR_LEFT_ARROW_Y - 10

#define WALL_TYPE_SIDE 30

#define WALL_TYPE_RED_SX 1260
#define WALL_TYPE_RED_SY 370
#define WALL_TYPE_RED_EX WALL_TYPE_RED_SX + WALL_TYPE_SIDE
#define WALL_TYPE_RED_EY WALL_TYPE_RED_SY + WALL_TYPE_SIDE

#define WALL_TYPE_WHITE_SX 1260
#define WALL_TYPE_WHITE_SY 414
#define WALL_TYPE_WHITE_EX WALL_TYPE_WHITE_SX + WALL_TYPE_SIDE
#define WALL_TYPE_WHITE_EY WALL_TYPE_WHITE_SY + WALL_TYPE_SIDE

// # define DRAW_SX 1143
// # define DRAW_SY 167
// # define DRAW_EX 1214
// # define DRAW_EY 236

// # define WALL_SX 1256
// # define WALL_SY 210
// # define WALL_EX 1284
// # define WALL_EY 236

// # define PORTAL_SX 1255
// # define PORTAL_SY 166
// # define PORTAL_EX 1285
// # define PORTAL_EY 195

// # define WALL_TEXT_LEFT_SX 1405
// # define WALL_TEXT_LEFT_SY 181
// # define WALL_TEXT_LEFT_EX 1420
// # define WALL_TEXT_LEFT_EY 198

// # define WALL_TEXT_RIGHT_SX 1503
// # define WALL_TEXT_RIGHT_SY 181
// # define WALL_TEXT_RIGHT_EX 1518
// # define WALL_TEXT_RIGHT_EY 198

// # define CEIL_ORI_Y_VALUE_SX 1184
// # define CEIL_ORI_Y_VALUE_SY 386

// # define CEIL_ORI_Y_LEFT_SX 1153
// # define CEIL_ORI_Y_LEFT_SY 393
// # define CEIL_ORI_Y_LEFT_EX 1162
// # define CEIL_ORI_Y_LEFT_EY 403

// # define CEIL_ORI_Y_RIGHT_SX 1230
// # define CEIL_ORI_Y_RIGHT_SY 393
// # define CEIL_ORI_Y_RIGHT_EX 1239
// # define CEIL_ORI_Y_RIGHT_EY 403

// # define CEIL_ORI_X_VALUE_SX 1184
// # define CEIL_ORI_X_VALUE_SY 410

// # define CEIL_ORI_X_LEFT_SX 1153
// # define CEIL_ORI_X_LEFT_SY 411
// # define CEIL_ORI_X_LEFT_EX 1162
// # define CEIL_ORI_X_LEFT_EY 423

// # define CEIL_ORI_X_RIGHT_SX 1230
// # define CEIL_ORI_X_RIGHT_SY 411
// # define CEIL_ORI_X_RIGHT_EX 1239
// # define CEIL_ORI_X_RIGHT_EY 423

// # define CEIL_HEIGHT_VALUE_SX 1320
// # define CEIL_HEIGHT_VALUE_SY 392

// # define CEIL_HEIGHT_LEFT_SX 1275
// # define CEIL_HEIGHT_LEFT_SY 394
// # define CEIL_HEIGHT_LEFT_EX 1287
// # define CEIL_HEIGHT_LEFT_EY 413

// # define CEIL_HEIGHT_RIGHT_SX 1375
// # define CEIL_HEIGHT_RIGHT_SY 394
// # define CEIL_HEIGHT_RIGHT_EX 1387
// # define CEIL_HEIGHT_RIGHT_EY 413

// # define CEIL_TEXT_LEFT_SX 1411
// # define CEIL_TEXT_LEFT_SY 394
// # define CEIL_TEXT_LEFT_EX 1423
// # define CEIL_TEXT_LEFT_EY 413

// # define CEIL_TEXT_RIGHT_SX 1511
// # define CEIL_TEXT_RIGHT_SY 394
// # define CEIL_TEXT_RIGHT_EX 1523
// # define CEIL_TEXT_RIGHT_EY 413

// # define FLOOR_ORI_Y_VALUE_SX 1184
// # define FLOOR_ORI_Y_VALUE_SY 510

// # define FLOOR_ORI_Y_LEFT_SX 1153
// # define FLOOR_ORI_Y_LEFT_SY 519
// # define FLOOR_ORI_Y_LEFT_EX 1162
// # define FLOOR_ORI_Y_LEFT_EY 529

// # define FLOOR_ORI_Y_RIGHT_SX 1230
// # define FLOOR_ORI_Y_RIGHT_SY 519
// # define FLOOR_ORI_Y_RIGHT_EX 1239
// # define FLOOR_ORI_Y_RIGHT_EY 529

// # define FLOOR_ORI_X_VALUE_SX 1184
// # define FLOOR_ORI_X_VALUE_SY 534

// # define FLOOR_ORI_X_LEFT_SX 1153
// # define FLOOR_ORI_X_LEFT_SY 537
// # define FLOOR_ORI_X_LEFT_EX 1162
// # define FLOOR_ORI_X_LEFT_EY 549

// # define FLOOR_ORI_X_RIGHT_SX 1230
// # define FLOOR_ORI_X_RIGHT_SY 537
// # define FLOOR_ORI_X_RIGHT_EX 1239
// # define FLOOR_ORI_X_RIGHT_EY 549

// # define FLOOR_HEIGHT_VALUE_SX 1320
// # define FLOOR_HEIGHT_VALUE_SY 516

// # define FLOOR_HEIGHT_LEFT_SX 1270
// # define FLOOR_HEIGHT_LEFT_SY 519
// # define FLOOR_HEIGHT_LEFT_EX 1283
// # define FLOOR_HEIGHT_LEFT_EY 537

// # define FLOOR_HEIGHT_RIGHT_SX 1368
// # define FLOOR_HEIGHT_RIGHT_SY 519
// # define FLOOR_HEIGHT_RIGHT_EX 1381
// # define FLOOR_HEIGHT_RIGHT_EY 538

// # define FLOOR_TEXT_LEFT_SX 1411
// # define FLOOR_TEXT_LEFT_SY 520
// # define FLOOR_TEXT_LEFT_EX 1423
// # define FLOOR_TEXT_LEFT_EY 539

// # define FLOOR_TEXT_RIGHT_SX 1511
// # define FLOOR_TEXT_RIGHT_SY 520
// # define FLOOR_TEXT_RIGHT_EX 1523
// # define FLOOR_TEXT_RIGHT_EY 539


// # define UP_TEXT_LEFT_SX 1119
// # define UP_TEXT_LEFT_SY 647
// # define UP_TEXT_LEFT_EX 1134
// # define UP_TEXT_LEFT_EY 670

// # define UP_TEXT_RIGHT_SX 1217
// # define UP_TEXT_RIGHT_SY 647
// # define UP_TEXT_RIGHT_EX 1231
// # define UP_TEXT_RIGHT_EY 670

// # define DOWN_TEXT_LEFT_SX 1270
// # define DOWN_TEXT_LEFT_SY 647
// # define DOWN_TEXT_LEFT_EX 1283
// # define DOWN_TEXT_LEFT_EY 670

// # define DOWN_TEXT_RIGHT_SX 1365
// # define DOWN_TEXT_RIGHT_SY 648
// # define DOWN_TEXT_RIGHT_EX 1382
// # define DOWN_TEXT_RIGHT_EY 670

// # define LIGHT_VALUE_SX 1462
// # define LIGHT_VALUE_SY 645

// # define LIGHT_TEXT_LEFT_SX 1419
// # define LIGHT_TEXT_LEFT_SY 647
// # define LIGHT_TEXT_LEFT_EX 1435
// # define LIGHT_TEXT_LEFT_EY 670

// # define LIGHT_TEXT_RIGHT_SX 1516
// # define LIGHT_TEXT_RIGHT_SY 647
// # define LIGHT_TEXT_RIGHT_EX 1535
// # define LIGHT_TEXT_RIGHT_EY 670



// # define OBJ_COLL_LEFT_SX 1125
// # define OBJ_COLL_LEFT_SY 811
// # define OBJ_COLL_LEFT_EX 1136
// # define OBJ_COLL_LEFT_EY 830

// # define OBJ_COLL_RIGHT_SX 1218
// # define OBJ_COLL_RIGHT_SY 811
// # define OBJ_COLL_RIGHT_EX 1231
// # define OBJ_COLL_RIGHT_EY 830


// # define OBJ_SCEN_LEFT_SX 1275
// # define OBJ_SCEN_LEFT_SY 811
// # define OBJ_SCEN_LEFT_EX 1289
// # define OBJ_SCEN_LEFT_EY 830

// # define OBJ_SCEN_RIGHT_SX 1369
// # define OBJ_SCEN_RIGHT_SY 811
// # define OBJ_SCEN_RIGHT_EX 1382
// # define OBJ_SCEN_RIGHT_EY 830

// # define OBJ_PNJ_LEFT_SX 1427
// # define OBJ_PNJ_LEFT_SY 811
// # define OBJ_PNJ_LEFT_EX 1441
// # define OBJ_PNJ_LEFT_EY 830

// # define OBJ_PNJ_RIGHT_SX 1521
// # define OBJ_PNJ_RIGHT_SY 811
// # define OBJ_PNJ_RIGHT_EX 1538
// # define OBJ_PNJ_RIGHT_EY 830

#endif
