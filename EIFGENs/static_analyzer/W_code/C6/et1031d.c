/*
 * Class ETF_INPUT_HANDLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1031 [] = {0xFF11,236,0xFF12,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1031 [] = {0xFF11,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1031 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1031 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1031 [] = {0xFF11,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1031 [] = {0xFF11,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1031 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1031 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1031 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1031 [] = {0xFF11,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1031 [] = {0xFF11,844,205,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1031 [] = {0xFF11,314,0xFF11,219,205,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1031 [] = {0xFF11,309,0xFF11,309,0xFF11,1016,0xFF11,219,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1031 [] = {0xFF11,938,0xFFFF};
static EIF_TYPE_INDEX gen_type19_1031 [] = {0xFF11,1532,0xFF11,0xFFF9,1,173,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type21_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type22_1031 [] = {0xFF11,1125,0xFFFF};
static EIF_TYPE_INDEX gen_type23_1031 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1031[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1031},
	{1, (BODY_INDEX)-1, 236, gen_type1_1031},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1030, gen_type2_1031},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1031},
	{14, (BODY_INDEX)-1, 0, gen_type4_1031},
	{15, (BODY_INDEX)-1, 1030, gen_type5_1031},
	{16, (BODY_INDEX)-1, 1030, gen_type6_1031},
	{17, (BODY_INDEX)-1, 0, gen_type7_1031},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1031},
	{21, (BODY_INDEX)-1, 219, gen_type9_1031},
	{22, (BODY_INDEX)-1, 219, gen_type10_1031},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1031},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1030, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1030, gen_type12_1031},
	{14857, (BODY_INDEX)-1, 844, gen_type13_1031},
	{14858, (BODY_INDEX)-1, 314, gen_type14_1031},
	{14859, (BODY_INDEX)-1, 309, gen_type15_1031},
	{14860, (BODY_INDEX)-1, 190, NULL},
	{14871, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14872, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14861, (BODY_INDEX)-1, 219, gen_type16_1031},
	{14862, 24, 190, NULL},
	{14863, 0, 219, gen_type17_1031},
	{14864, 8, 938, gen_type18_1031},
	{14865, 16, 1532, gen_type19_1031},
	{14866, (BODY_INDEX)-1, 219, gen_type20_1031},
	{14867, (BODY_INDEX)-1, 219, gen_type21_1031},
	{14868, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14869, (BODY_INDEX)-1, 1125, gen_type22_1031},
	{14870, (BODY_INDEX)-1, 219, gen_type23_1031},
};

extern void Init1031(void);
void Init1031(void)
{
	IDSC(desc_1031, 0, 1030);
	IDSC(desc_1031 + 1, 1, 1030);
	IDSC(desc_1031 + 32, 408, 1030);
	IDSC(desc_1031 + 36, 362, 1030);
}


#ifdef __cplusplus
}
#endif
