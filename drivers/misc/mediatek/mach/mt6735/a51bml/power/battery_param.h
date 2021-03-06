#ifndef _BATTERY_PARAM_H
#define _BATTERY_PARAM_H

/*
 * the parameters in this file are copied from the link below
 * http://git.htc.com:8081/#/c/401792/ 
 *
 * use sed command to add "\" to concatenate lines in "#define" 
 * for example
 * 
 * 		sed -i '12,30s/$/&pattern/g' battery_param.h
 * 
 * will add pattern to the end of each line for lines 12 until 30
 * here we use \\ for "\" as the pattern
 * so the command is               
 *
 *      sed -i '12,30s/$/&\\/g' battery_param.h 
 *     */

#include <generated/autoconf.h>
#include <mach/mt_typedefs.h>
//to be modified

#define Batt100_Temperature_Table  \
{\
{-20,1282000}, \
{-19,1201000},\
{-18,1126000},\
{-17,1056000},\
{-16,990300},\
{-15,929400},\
{-14,872600},\
{-13,819600},\
{-12,770100},\
{-11,724000},\
{-10,680900},\
{-9,640700},\
{-8,603100},\
{-7,567900},\
{-6,534900},\
{-5,504100},\
{-4,475200},\
{-3,448100},\
{-2,422800},\
{-1,399000},\
{0,376600},\
{1,355700},\
{2,336000},\
{3,317600},\
{4,300200},\
{5,283900},\
{6,268600},\
{7,254200},\
{8,240700},\
{9,228000},\
{10,216000},\
{11,204700},\
{12,194100},\
{13,184100},\
{14,174700},\
{15,165800},\
{16,157400},\
{17,149400},\
{18,142000},\
{19,134900},\
{20,128200},\
{21,121900},\
{22,116000},\
{23,110400},\
{24,105000},\
{25,100000},\
{26,95229},\
{27,90716},\
{28,86444},\
{29,82399},\
{30,78569},\
{31,74940},\
{32,71501},\
{33,68241},\
{34,65149},\
{35,62216},\
{36,59433},\
{37,56791},\
{38,54282},\
{39,51899},\
{40,49635},\
{41,47483},\
{42,45438},\
{43,43492},\
{44,41641},\
{45,39880},\
{46,38204},\
{47,36608},\
{48,35088},\
{49,33640},\
{50,32261},\
{51,30940},\
{52,29690},\
{53,28490},\
{54,27350},\
{55,26260},\
{56,25220},\
{57,24230},\
{58,23280},\
{59,22370},\
{60,21510},\
{61,20680},\
{62,19890},\
{63,19140},\
{64,18400},\
{65,17700},\
{66,17060},\
{67,16430},\
{68,15820},\
{69,15240},\
{70,14690},\
{71,14160},\
{72,13650},\
{73,13160},\
{74,12690},\
{75,12240},\
{76,11810},\
{77,11400},\
{78,11000},\
{79,10620},\
{80,10250}\
}


#define Batt47_Temperature_Table \
{\
{-20,483954}, \
{-15,360850},\
{-10,271697},\
{ -5,206463},\
{  0,158214},\
{  5,122259},\
{ 10,95227},\
{ 15,74730},\
{ 20,59065},\
{ 25,47000},\
{ 30,37643},\
{ 35,30334},\
{ 40,24591},\
{ 45,20048},\
{ 50,16433},\
{ 55,13539},\
{ 60,11210}\
}

#define Batt10_Temperature_Table \
{\
{-20,68237}, \
{-15,53650},\
{-10,42506},\
{ -5,33892},\
{  0,27219},\
{  5,22021},\
{ 10,17926},\
{ 15,14674},\
{ 20,12081},\
{ 25,10000},\
{ 30,8315},\
{ 35,6948},\
{ 40,5834},\
{ 45,4917},\
{ 50,4161},\
{ 55,3535},\
{ 60,3014}\
}



//T: -10C
#define battery0_profile_t0 \
{\
{0   , 4344}, \
{2   , 4320},\
{3   , 4291},\
{5   , 4250},\
{6   , 4224},\
{8   , 4205},\
{9   , 4188},\
{11  , 4172},\
{12  , 4157},\
{14  , 4142},\
{15  , 4127},\
{17  , 4112},\
{18  , 4097},\
{20  , 4084},\
{21  , 4072},\
{23  , 4060},\
{24  , 4045},\
{26  , 4025},\
{27  , 4005},\
{29  , 3986},\
{30  , 3968},\
{32  , 3955},\
{33  , 3943},\
{35  , 3931},\
{36  , 3920},\
{38  , 3906},\
{39  , 3895},\
{41  , 3885},\
{42  , 3874},\
{44  , 3864},\
{45  , 3857},\
{47  , 3847},\
{48  , 3841},\
{50  , 3833},\
{51  , 3827},\
{53  , 3819},\
{54  , 3814},\
{56  , 3810},\
{57  , 3805},\
{59  , 3800},\
{60  , 3793},\
{62  , 3790},\
{63  , 3786},\
{65  , 3783},\
{66  , 3780},\
{68  , 3777},\
{69  , 3776},\
{71  , 3774},\
{72  , 3770},\
{74  , 3766},\
{75  , 3762},\
{77  , 3757},\
{78  , 3754},\
{80  , 3748},\
{81  , 3741},\
{83  , 3734},\
{84  , 3726},\
{86  , 3719},\
{87  , 3712},\
{89  , 3702},\
{90  , 3695},\
{92  , 3690},\
{93  , 3687},\
{95  , 3682},\
{96  , 3676},\
{97  , 3669},\
{97  , 3662},\
{98  , 3653},\
{98  , 3641},\
{98  , 3630},\
{99  , 3616},\
{99  , 3606},\
{99  , 3596},\
{99  , 3588},\
{99  , 3579},\
{100 , 3573},\
{100 , 3566},\
{100 , 3560},\
{100 , 3555},\
{100 , 3552},\
{100 , 3547},\
{100 , 3544},\
{100 , 3400}\
}

//T: 0C
#define battery0_profile_t1\
{\
{0   , 4335}, \
{1   , 4308},\
{3   , 4288},\
{4   , 4272},\
{5   , 4255},\
{7   , 4239},\
{8   , 4222},\
{10  , 4208},\
{11  , 4191},\
{12  , 4177},\
{14  , 4162},\
{15  , 4147},\
{16  , 4132},\
{18  , 4118},\
{19  , 4102},\
{21  , 4089},\
{22  , 4074},\
{23  , 4061},\
{25  , 4049},\
{26  , 4038},\
{27  , 4022},\
{29  , 4003},\
{30  , 3984},\
{32  , 3969},\
{33  , 3956},\
{34  , 3946},\
{36  , 3935},\
{37  , 3925},\
{38  , 3912},\
{40  , 3899},\
{41  , 3885},\
{42  , 3872},\
{44  , 3862},\
{45  , 3852},\
{47  , 3842},\
{48  , 3833},\
{49  , 3827},\
{51  , 3818},\
{52  , 3812},\
{53  , 3806},\
{55  , 3801},\
{56  , 3796},\
{58  , 3790},\
{59  , 3785},\
{60  , 3780},\
{62  , 3776},\
{63  , 3772},\
{64  , 3769},\
{66  , 3765},\
{67  , 3762},\
{69  , 3759},\
{70  , 3756},\
{71  , 3755},\
{73  , 3752},\
{74  , 3749},\
{75  , 3746},\
{77  , 3741},\
{78  , 3738},\
{79  , 3731},\
{81  , 3726},\
{82  , 3719},\
{84  , 3713},\
{85  , 3705},\
{86  , 3697},\
{88  , 3687},\
{89  , 3678},\
{90  , 3674},\
{92  , 3671},\
{93  , 3667},\
{95  , 3662},\
{96  , 3647},\
{97  , 3596},\
{98  , 3544},\
{99  , 3512},\
{99  , 3487},\
{99  , 3467},\
{100 , 3452},\
{100 , 3442},\
{100 , 3433},\
{100 , 3426},\
{100 , 3421},\
{100 , 3418},\
{100 , 3400}\
}


//T:25C
#define battery0_profile_t2\
{\
{0   , 4381}, \
{1   , 4363},\
{3   , 4349},\
{4   , 4334},\
{5   , 4318},\
{7   , 4303},\
{8   , 4287},\
{9   , 4271},\
{11  , 4256},\
{12  , 4241},\
{13  , 4225},\
{14  , 4210},\
{16  , 4195},\
{17  , 4179},\
{18  , 4164},\
{20  , 4150},\
{21  , 4135},\
{22  , 4120},\
{24  , 4106},\
{25  , 4092},\
{26  , 4078},\
{28  , 4065},\
{29  , 4053},\
{30  , 4039},\
{32  , 4025},\
{33  , 4011},\
{34  , 3999},\
{36  , 3988},\
{37  , 3978},\
{38  , 3967},\
{39  , 3956},\
{41  , 3944},\
{42  , 3930},\
{43  , 3912},\
{45  , 3896},\
{46  , 3883},\
{47  , 3874},\
{49  , 3866},\
{50  , 3858},\
{51  , 3850},\
{53  , 3844},\
{54  , 3837},\
{55  , 3831},\
{57  , 3825},\
{58  , 3820},\
{59  , 3814},\
{61  , 3810},\
{62  , 3805},\
{63  , 3800},\
{64  , 3796},\
{66  , 3792},\
{67  , 3789},\
{68  , 3785},\
{70  , 3782},\
{71  , 3778},\
{72  , 3772},\
{74  , 3765},\
{75  , 3760},\
{76  , 3755},\
{78  , 3749},\
{79  , 3744},\
{80  , 3741},\
{82  , 3736},\
{83  , 3730},\
{84  , 3723},\
{86  , 3716},\
{87  , 3708},\
{88  , 3698},\
{89  , 3691},\
{91  , 3688},\
{92  , 3687},\
{93  , 3685},\
{95  , 3681},\
{96  , 3660},\
{97  , 3605},\
{99  , 3525},\
{100 , 3400},\
{101 , 3282},\
{101 , 3266},\
{101 , 3260},\
{101 , 3257},\
{101 , 3255},\
{101 , 3251}\
}


//T:50C
#define battery0_profile_t3\
{\
{0   , 4395}, \
{1   , 4377},\
{3   , 4362},\
{4   , 4347},\
{5   , 4332},\
{6   , 4318},\
{8   , 4302},\
{9   , 4287},\
{10  , 4272},\
{12  , 4256},\
{13  , 4241},\
{14  , 4226},\
{16  , 4211},\
{17  , 4195},\
{18  , 4180},\
{19  , 4165},\
{21  , 4151},\
{22  , 4136},\
{23  , 4122},\
{25  , 4107},\
{26  , 4094},\
{27  , 4080},\
{29  , 4067},\
{30  , 4054},\
{31  , 4041},\
{32  , 4028},\
{34  , 4016},\
{35  , 4004},\
{36  , 3992},\
{38  , 3981},\
{39  , 3970},\
{40  , 3959},\
{42  , 3947},\
{43  , 3935},\
{44  , 3915},\
{45  , 3899},\
{47  , 3887},\
{48  , 3877},\
{49  , 3869},\
{51  , 3861},\
{52  , 3853},\
{53  , 3847},\
{55  , 3840},\
{56  , 3834},\
{57  , 3828},\
{58  , 3821},\
{60  , 3816},\
{61  , 3812},\
{62  , 3806},\
{64  , 3802},\
{65  , 3797},\
{66  , 3793},\
{67  , 3789},\
{69  , 3786},\
{70  , 3781},\
{71  , 3776},\
{73  , 3765},\
{74  , 3756},\
{75  , 3750},\
{77  , 3744},\
{78  , 3738},\
{79  , 3733},\
{80  , 3729},\
{82  , 3724},\
{83  , 3719},\
{84  , 3711},\
{86  , 3704},\
{87  , 3697},\
{88  , 3687},\
{90  , 3680},\
{91  , 3678},\
{92  , 3677},\
{93  , 3675},\
{95  , 3671},\
{96  , 3650},\
{97  , 3598},\
{99  , 3524},\
{100 , 3410},\
{101 , 3265},\
{102 , 3249},\
{102 , 3243},\
{102 , 3242},\
{102 , 3240}\
}


//T: -10C
#define battery1_profile_t0 \
{\
{0   , 4374}, \
{2   , 4320},\
{4   , 4284},\
{5   , 4255},\
{7   , 4229},\
{9   , 4206},\
{11  , 4183},\
{12  , 4161},\
{14  , 4140},\
{16  , 4122},\
{18  , 4106},\
{19  , 4087},\
{21  , 4064},\
{23  , 4038},\
{25  , 4011},\
{26  , 3989},\
{28  , 3968},\
{30  , 3953},\
{32  , 3940},\
{33  , 3927},\
{35  , 3914},\
{37  , 3902},\
{39  , 3891},\
{40  , 3879},\
{42  , 3868},\
{44  , 3857},\
{46  , 3848},\
{47  , 3838},\
{49  , 3830},\
{51  , 3822},\
{53  , 3815},\
{54  , 3809},\
{56  , 3804},\
{58  , 3800},\
{60  , 3795},\
{61  , 3792},\
{63  , 3788},\
{65  , 3784},\
{67  , 3779},\
{68  , 3775},\
{70  , 3770},\
{72  , 3766},\
{74  , 3760},\
{75  , 3755},\
{77  , 3749},\
{79  , 3742},\
{81  , 3734},\
{82  , 3728},\
{84  , 3722},\
{86  , 3716},\
{88  , 3709},\
{89  , 3702},\
{91  , 3694},\
{93  , 3681},\
{95  , 3658},\
{96  , 3636},\
{97  , 3615},\
{97  , 3595},\
{98  , 3574},\
{98  , 3552},\
{99  , 3530},\
{99  , 3507},\
{99  , 3484},\
{99  , 3460},\
{100 , 3437},\
{100 , 3414},\
{100 , 3393},\
{100 , 3373},\
{100 , 3353},\
{100 , 3336},\
{100 , 3321},\
{100 , 3309},\
{100 , 3299},\
{100 , 3289},\
{100 , 3281},\
{100 , 3276},\
{100 , 3271},\
{100 , 3267},\
{100 , 3263},\
{100 , 3260},\
{100 , 3257},\
{100 , 3257},\
{100 , 3257}\
}


//T:0C
#define battery1_profile_t1\
{\
{0   , 4376}, \
{2   , 4336},\
{3   , 4307},\
{5   , 4283},\
{7   , 4261},\
{9   , 4241},\
{10  , 4220},\
{12  , 4201},\
{14  , 4182},\
{16  , 4163},\
{17  , 4144},\
{19  , 4126},\
{21  , 4106},\
{23  , 4092},\
{24  , 4077},\
{26  , 4056},\
{28  , 4028},\
{30  , 3997},\
{31  , 3973},\
{33  , 3955},\
{35  , 3940},\
{36  , 3929},\
{38  , 3917},\
{40  , 3905},\
{42  , 3893},\
{43  , 3882},\
{45  , 3870},\
{47  , 3860},\
{49  , 3849},\
{50  , 3840},\
{52  , 3832},\
{54  , 3824},\
{56  , 3816},\
{57  , 3809},\
{59  , 3802},\
{61  , 3797},\
{63  , 3792},\
{64  , 3789},\
{66  , 3786},\
{68  , 3782},\
{69  , 3779},\
{71  , 3777},\
{73  , 3773},\
{75  , 3769},\
{76  , 3764},\
{78  , 3758},\
{80  , 3751},\
{82  , 3744},\
{83  , 3735},\
{85  , 3724},\
{87  , 3713},\
{89  , 3704},\
{90  , 3698},\
{92  , 3693},\
{94  , 3685},\
{96  , 3668},\
{97  , 3617},\
{99  , 3520},\
{100 , 3441},\
{100 , 3366},\
{100 , 3295},\
{100 , 3240},\
{100 , 3209},\
{100 , 3193},\
{100 , 3185},\
{100 , 3179},\
{100 , 3173},\
{100 , 3168},\
{100 , 3165},\
{100 , 3160},\
{100 , 3160},\
{100 , 3158},\
{100 , 3154},\
{100 , 3149},\
{100 , 3149},\
{100 , 3151},\
{100 , 3146},\
{100 , 3144},\
{100 , 3142},\
{100 , 3140},\
{100 , 3141},\
{100 , 3141},\
{100 , 3141}\
}


//T:25C
#define battery1_profile_t2\
{\
{0   , 4378}, \
{2   , 4344},\
{4   , 4317},\
{5   , 4293},\
{7   , 4272},\
{9   , 4250},\
{11  , 4230},\
{12  , 4210},\
{14  , 4191},\
{16  , 4172},\
{17  , 4153},\
{19  , 4134},\
{21  , 4116},\
{23  , 4098},\
{24  , 4082},\
{26  , 4072},\
{28  , 4055},\
{30  , 4023},\
{32  , 3998},\
{33  , 3982},\
{35  , 3975},\
{37  , 3968},\
{39  , 3956},\
{40  , 3941},\
{42  , 3926},\
{44  , 3908},\
{46  , 3890},\
{47  , 3874},\
{49  , 3861},\
{51  , 3850},\
{52  , 3840},\
{54  , 3832},\
{56  , 3824},\
{58  , 3817},\
{59  , 3810},\
{61  , 3805},\
{63  , 3798},\
{65  , 3793},\
{66  , 3788},\
{68  , 3784},\
{70  , 3780},\
{72  , 3776},\
{73  , 3773},\
{75  , 3769},\
{77  , 3764},\
{79  , 3757},\
{80  , 3750},\
{82  , 3743},\
{84  , 3734},\
{86  , 3722},\
{87  , 3711},\
{89  , 3695},\
{91  , 3693},\
{93  , 3690},\
{94  , 3688},\
{96  , 3674},\
{98  , 3596},\
{100 , 3452},\
{100 , 3218},\
{100 , 3182},\
{100 , 3156},\
{100 , 3137},\
{100 , 3119},\
{100 , 3104},\
{100 , 3095},\
{100 , 3089},\
{100 , 3082},\
{100 , 3073},\
{100 , 3063},\
{100 , 3051},\
{100 , 3039},\
{100 , 3026},\
{100 , 3012},\
{100 , 2999},\
{100 , 2983},\
{100 , 2966},\
{100 , 2954},\
{100 , 2941},\
{100 , 2928},\
{100 , 2916},\
{100 , 2898},\
{100 , 2898},\
{100 , 2898}\
}


//T:50C
#define battery1_profile_t3\
{\
{0   , 4375}, \
{2   , 4338},\
{4   , 4313},\
{5   , 4289},\
{7   , 4267},\
{9   , 4245},\
{11  , 4225},\
{12  , 4205},\
{14  , 4185},\
{16  , 4167},\
{17  , 4147},\
{19  , 4129},\
{21  , 4110},\
{23  , 4092},\
{24  , 4075},\
{26  , 4057},\
{28  , 4042},\
{30  , 4024},\
{31  , 4008},\
{33  , 3995},\
{35  , 3980},\
{37  , 3966},\
{39  , 3953},\
{40  , 3940},\
{42  , 3928},\
{44  , 3913},\
{45  , 3892},\
{47  , 3873},\
{49  , 3860},\
{51  , 3849},\
{52  , 3839},\
{54  , 3831},\
{56  , 3823},\
{58  , 3816},\
{59  , 3809},\
{61  , 3803},\
{63  , 3797},\
{65  , 3792},\
{66  , 3787},\
{68  , 3782},\
{70  , 3778},\
{72  , 3772},\
{73  , 3762},\
{75  , 3753},\
{77  , 3747},\
{79  , 3740},\
{80  , 3733},\
{82  , 3727},\
{84  , 3719},\
{86  , 3708},\
{87  , 3696},\
{89  , 3681},\
{91  , 3678},\
{93  , 3678},\
{94  , 3675},\
{96  , 3660},\
{98  , 3583},\
{100 , 3450},\
{100 , 3176},\
{100 , 3139},\
{100 , 3122},\
{100 , 3115},\
{100 , 3106},\
{100 , 3095},\
{100 , 3088},\
{100 , 3079},\
{100 , 3074},\
{100 , 3067},\
{100 , 3064},\
{100 , 3059},\
{100 , 3051},\
{100 , 3044},\
{100 , 3038},\
{100 , 3029},\
{100 , 3018},\
{100 , 3006},\
{100 , 2999},\
{100 , 2992},\
{100 , 2980},\
{100 , 2974},\
{100 , 2963},\
{100 , 2963},\
{100 , 2963}\
}


//T: -10C
#define battery0_r_profile_t0\
{\
{660  , 4344},\
{660  , 4320},\
{683  , 4291},\
{718  , 4250},\
{795  , 4224},\
{805  , 4205},\
{808  , 4188},\
{808  , 4172},\
{810  , 4157},\
{810  , 4142},\
{803  , 4127},\
{810  , 4112},\
{803  , 4097},\
{805  , 4084},\
{810  , 4072},\
{815  , 4060},\
{810  , 4045},\
{800  , 4025},\
{793  , 4005},\
{785  , 3986},\
{778  , 3968},\
{783  , 3955},\
{780  , 3943},\
{778  , 3931},\
{775  , 3920},\
{763  , 3906},\
{760  , 3895},\
{755  , 3885},\
{750  , 3874},\
{753  , 3864},\
{758  , 3857},\
{750  , 3847},\
{758  , 3841},\
{760  , 3833},\
{763  , 3827},\
{763  , 3819},\
{765  , 3814},\
{773  , 3810},\
{780  , 3805},\
{783  , 3800},\
{780  , 3793},\
{793  , 3790},\
{793  , 3786},\
{798  , 3783},\
{803  , 3780},\
{808  , 3777},\
{818  , 3776},\
{830  , 3774},\
{835  , 3770},\
{838  , 3766},\
{848  , 3762},\
{865  , 3757},\
{880  , 3754},\
{898  , 3748},\
{910  , 3741},\
{928  , 3734},\
{948  , 3726},\
{973  , 3719},\
{1003 , 3712},\
{1025 , 3702},\
{1060 , 3695},\
{1098 , 3690},\
{1148 , 3687},\
{1205 , 3682},\
{1190 , 3676},\
{1173 , 3669},\
{1155 , 3662},\
{1133 , 3653},\
{1103 , 3641},\
{1075 , 3630},\
{1040 , 3616},\
{1015 , 3606},\
{990  , 3596},\
{970  , 3588},\
{948  , 3579},\
{933  , 3573},\
{915  , 3566},\
{900  , 3560},\
{888  , 3555},\
{880  , 3552},\
{868  , 3547},\
{860  , 3544},\
{500  , 3400}\
}


//T:0C
#define	battery0_r_profile_t1\
{\
{480 , 4335}, \
{480 , 4308},\
{490 , 4288},\
{500 , 4272},\
{503 , 4255},\
{500 , 4239},\
{498 , 4222},\
{498 , 4208},\
{498 , 4191},\
{495 , 4177},\
{498 , 4162},\
{490 , 4147},\
{488 , 4132},\
{490 , 4118},\
{480 , 4102},\
{485 , 4089},\
{483 , 4074},\
{485 , 4061},\
{488 , 4049},\
{493 , 4038},\
{488 , 4022},\
{480 , 4003},\
{473 , 3984},\
{475 , 3969},\
{475 , 3956},\
{478 , 3946},\
{475 , 3935},\
{468 , 3925},\
{465 , 3912},\
{453 , 3899},\
{443 , 3885},\
{438 , 3872},\
{438 , 3862},\
{435 , 3852},\
{435 , 3842},\
{430 , 3833},\
{435 , 3827},\
{430 , 3818},\
{435 , 3812},\
{438 , 3806},\
{440 , 3801},\
{440 , 3796},\
{445 , 3790},\
{448 , 3785},\
{448 , 3780},\
{453 , 3776},\
{455 , 3772},\
{458 , 3769},\
{463 , 3765},\
{465 , 3762},\
{465 , 3759},\
{468 , 3756},\
{478 , 3755},\
{480 , 3752},\
{488 , 3749},\
{493 , 3746},\
{495 , 3741},\
{503 , 3738},\
{505 , 3731},\
{518 , 3726},\
{525 , 3719},\
{538 , 3713},\
{550 , 3705},\
{563 , 3697},\
{578 , 3687},\
{595 , 3678},\
{620 , 3674},\
{643 , 3671},\
{675 , 3667},\
{725 , 3662},\
{790 , 3647},\
{850 , 3596},\
{860 , 3544},\
{780 , 3512},\
{718 , 3487},\
{668 , 3467},\
{630 , 3452},\
{605 , 3442},\
{583 , 3433},\
{565 , 3426},\
{553 , 3421},\
{545 , 3418},\
{500 , 3400}\
}


//T:25C
#define battery0_r_profile_t2 \
{\
{160 , 4381}, \
{160 , 4363},\
{165 , 4349},\
{165 , 4334},\
{163 , 4318},\
{163 , 4303},\
{163 , 4287},\
{163 , 4271},\
{165 , 4256},\
{168 , 4241},\
{163 , 4225},\
{165 , 4210},\
{168 , 4195},\
{165 , 4179},\
{165 , 4164},\
{168 , 4150},\
{168 , 4135},\
{165 , 4120},\
{168 , 4106},\
{168 , 4092},\
{168 , 4078},\
{170 , 4065},\
{175 , 4053},\
{173 , 4039},\
{175 , 4025},\
{180 , 4011},\
{180 , 3999},\
{183 , 3988},\
{185 , 3978},\
{185 , 3967},\
{190 , 3956},\
{188 , 3944},\
{185 , 3930},\
{170 , 3912},\
{160 , 3896},\
{155 , 3883},\
{155 , 3874},\
{158 , 3866},\
{155 , 3858},\
{155 , 3850},\
{158 , 3844},\
{155 , 3837},\
{158 , 3831},\
{158 , 3825},\
{160 , 3820},\
{158 , 3814},\
{160 , 3810},\
{160 , 3805},\
{160 , 3800},\
{163 , 3796},\
{163 , 3792},\
{165 , 3789},\
{165 , 3785},\
{168 , 3782},\
{168 , 3778},\
{165 , 3772},\
{158 , 3765},\
{155 , 3760},\
{158 , 3755},\
{155 , 3749},\
{155 , 3744},\
{158 , 3741},\
{160 , 3736},\
{160 , 3730},\
{160 , 3723},\
{160 , 3716},\
{160 , 3708},\
{160 , 3698},\
{158 , 3691},\
{160 , 3688},\
{165 , 3687},\
{168 , 3685},\
{173 , 3681},\
{173 , 3660},\
{175 , 3605},\
{188 , 3525},\
{203 , 3400},\
{205 , 3282},\
{165 , 3266},\
{150 , 3260},\
{143 , 3257},\
{138 , 3255},\
{128 , 3251}\
}


//T:50C
#define battery0_r_profile_t3 \
{\
{113 , 4395}, \
{113 , 4377},\
{115 , 4362},\
{115 , 4347},\
{115 , 4332},\
{115 , 4318},\
{113 , 4302},\
{115 , 4287},\
{115 , 4272},\
{113 , 4256},\
{115 , 4241},\
{118 , 4226},\
{118 , 4211},\
{115 , 4195},\
{115 , 4180},\
{118 , 4165},\
{118 , 4151},\
{115 , 4136},\
{118 , 4122},\
{118 , 4107},\
{120 , 4094},\
{120 , 4080},\
{123 , 4067},\
{123 , 4054},\
{123 , 4041},\
{125 , 4028},\
{128 , 4016},\
{130 , 4004},\
{130 , 3992},\
{133 , 3981},\
{135 , 3970},\
{138 , 3959},\
{138 , 3947},\
{138 , 3935},\
{123 , 3915},\
{118 , 3899},\
{115 , 3887},\
{113 , 3877},\
{115 , 3869},\
{115 , 3861},\
{113 , 3853},\
{115 , 3847},\
{115 , 3840},\
{115 , 3834},\
{118 , 3828},\
{115 , 3821},\
{115 , 3816},\
{120 , 3812},\
{118 , 3806},\
{120 , 3802},\
{120 , 3797},\
{123 , 3793},\
{123 , 3789},\
{128 , 3786},\
{125 , 3781},\
{125 , 3776},\
{115 , 3765},\
{115 , 3756},\
{115 , 3750},\
{115 , 3744},\
{113 , 3738},\
{115 , 3733},\
{118 , 3729},\
{118 , 3724},\
{118 , 3719},\
{118 , 3711},\
{115 , 3704},\
{118 , 3697},\
{115 , 3687},\
{115 , 3680},\
{113 , 3678},\
{120 , 3677},\
{123 , 3675},\
{128 , 3671},\
{123 , 3650},\
{128 , 3598},\
{135 , 3524},\
{143 , 3410},\
{163 , 3265},\
{123 , 3249},\
{108 , 3243},\
{105 , 3242},\
{100 , 3240}\
}


//T: -10C
#define battery1_r_profile_t0 \
{\
{1778 , 4374}, \
{1778 , 4320},\
{1763 , 4284},\
{1730 , 4255},\
{1695 , 4229},\
{1663 , 4206},\
{1625 , 4183},\
{1598 , 4161},\
{1560 , 4140},\
{1538 , 4122},\
{1523 , 4106},\
{1498 , 4087},\
{1470 , 4064},\
{1433 , 4038},\
{1395 , 4011},\
{1368 , 3989},\
{1343 , 3968},\
{1338 , 3953},\
{1333 , 3940},\
{1330 , 3927},\
{1325 , 3914},\
{1320 , 3902},\
{1318 , 3891},\
{1315 , 3879},\
{1313 , 3868},\
{1308 , 3857},\
{1310 , 3848},\
{1308 , 3838},\
{1310 , 3830},\
{1313 , 3822},\
{1320 , 3815},\
{1328 , 3809},\
{1343 , 3804},\
{1363 , 3800},\
{1383 , 3795},\
{1410 , 3792},\
{1438 , 3788},\
{1465 , 3784},\
{1493 , 3779},\
{1525 , 3775},\
{1555 , 3770},\
{1588 , 3766},\
{1615 , 3760},\
{1648 , 3755},\
{1678 , 3749},\
{1710 , 3742},\
{1735 , 3734},\
{1768 , 3728},\
{1803 , 3722},\
{1835 , 3716},\
{1873 , 3709},\
{1915 , 3702},\
{1973 , 3694},\
{2035 , 3681},\
{2105 , 3658},\
{2090 , 3636},\
{2040 , 3615},\
{1990 , 3595},\
{1938 , 3574},\
{1888 , 3552},\
{1830 , 3530},\
{1768 , 3507},\
{1713 , 3484},\
{1658 , 3460},\
{1595 , 3437},\
{1543 , 3414},\
{1483 , 3393},\
{1443 , 3373},\
{1390 , 3353},\
{1343 , 3336},\
{1310 , 3321},\
{1285 , 3309},\
{1250 , 3299},\
{1235 , 3289},\
{1208 , 3281},\
{1195 , 3276},\
{1180 , 3271},\
{1178 , 3267},\
{1168 , 3263},\
{1153 , 3260},\
{1150 , 3257},\
{1150 , 3257},\
{1150 , 3257}\
}


//T:0C
#define battery1_r_profile_t1 \
{\
{880  , 4376}, \
{880  , 4336},\
{885  , 4307},\
{885  , 4283},\
{880  , 4261},\
{880  , 4241},\
{873  , 4220},\
{870  , 4201},\
{863  , 4182},\
{865  , 4163},\
{853  , 4144},\
{848  , 4126},\
{835  , 4106},\
{843  , 4092},\
{845  , 4077},\
{830  , 4056},\
{803  , 4028},\
{773  , 3997},\
{755  , 3973},\
{748  , 3955},\
{743  , 3940},\
{745  , 3929},\
{740  , 3917},\
{735  , 3905},\
{733  , 3893},\
{728  , 3882},\
{725  , 3870},\
{725  , 3860},\
{723  , 3849},\
{723  , 3840},\
{728  , 3832},\
{738  , 3824},\
{733  , 3816},\
{735  , 3809},\
{740  , 3802},\
{745  , 3797},\
{753  , 3792},\
{765  , 3789},\
{783  , 3786},\
{800  , 3782},\
{820  , 3779},\
{848  , 3777},\
{873  , 3773},\
{905  , 3769},\
{930  , 3764},\
{960  , 3758},\
{988  , 3751},\
{1025 , 3744},\
{1060 , 3735},\
{1105 , 3724},\
{1153 , 3713},\
{1215 , 3704},\
{1300 , 3698},\
{1408 , 3693},\
{1535 , 3685},\
{1665 , 3668},\
{1740 , 3617},\
{1800 , 3520},\
{1610 , 3441},\
{1415 , 3366},\
{1240 , 3295},\
{1105 , 3240},\
{1033 , 3209},\
{998  , 3193},\
{970  , 3185},\
{953  , 3179},\
{945  , 3173},\
{935  , 3168},\
{920  , 3165},\
{940  , 3160},\
{908  , 3160},\
{905  , 3158},\
{910  , 3154},\
{920  , 3149},\
{893  , 3149},\
{880  , 3151},\
{910  , 3146},\
{890  , 3144},\
{890  , 3142},\
{893  , 3140},\
{858  , 3141},\
{858  , 3141},\
{858  , 3141}\
}


//T:25C
#define battery1_r_profile_t2 \
{\
{215 , 4378}, \
{215 , 4344},\
{213 , 4317},\
{215 , 4293},\
{220 , 4272},\
{213 , 4250},\
{210 , 4230},\
{213 , 4210},\
{218 , 4191},\
{220 , 4172},\
{223 , 4153},\
{220 , 4134},\
{225 , 4116},\
{233 , 4098},\
{235 , 4082},\
{245 , 4072},\
{240 , 4055},\
{233 , 4023},\
{238 , 3998},\
{240 , 3982},\
{248 , 3975},\
{248 , 3968},\
{248 , 3956},\
{248 , 3941},\
{243 , 3926},\
{225 , 3908},\
{210 , 3890},\
{200 , 3874},\
{198 , 3861},\
{195 , 3850},\
{188 , 3840},\
{188 , 3832},\
{188 , 3824},\
{190 , 3817},\
{193 , 3810},\
{193 , 3805},\
{193 , 3798},\
{203 , 3793},\
{203 , 3788},\
{203 , 3784},\
{200 , 3780},\
{203 , 3776},\
{205 , 3773},\
{208 , 3769},\
{203 , 3764},\
{195 , 3757},\
{198 , 3750},\
{200 , 3743},\
{205 , 3734},\
{200 , 3722},\
{203 , 3711},\
{200 , 3695},\
{208 , 3693},\
{208 , 3690},\
{220 , 3688},\
{238 , 3674},\
{240 , 3596},\
{285 , 3452},\
{545 , 3218},\
{458 , 3182},\
{410 , 3156},\
{350 , 3137},\
{303 , 3119},\
{273 , 3104},\
{258 , 3095},\
{243 , 3089},\
{243 , 3082},\
{245 , 3073},\
{265 , 3063},\
{290 , 3051},\
{308 , 3039},\
{338 , 3026},\
{370 , 3012},\
{408 , 2999},\
{458 , 2983},\
{508 , 2966},\
{543 , 2954},\
{558 , 2941},\
{580 , 2928},\
{603 , 2916},\
{625 , 2898},\
{625 , 2898},\
{625 , 2898}\
}


//T:50C
#define battery1_r_profile_t3 \
{\
{148 , 4375}, \
{148 , 4338},\
{140 , 4313},\
{135 , 4289},\
{140 , 4267},\
{135 , 4245},\
{138 , 4225},\
{138 , 4205},\
{135 , 4185},\
{140 , 4167},\
{140 , 4147},\
{140 , 4129},\
{143 , 4110},\
{143 , 4092},\
{145 , 4075},\
{140 , 4057},\
{148 , 4042},\
{148 , 4024},\
{150 , 4008},\
{155 , 3995},\
{155 , 3980},\
{160 , 3966},\
{163 , 3953},\
{168 , 3940},\
{178 , 3928},\
{175 , 3913},\
{158 , 3892},\
{140 , 3873},\
{138 , 3860},\
{135 , 3849},\
{133 , 3839},\
{135 , 3831},\
{135 , 3823},\
{135 , 3816},\
{138 , 3809},\
{138 , 3803},\
{138 , 3797},\
{143 , 3792},\
{143 , 3787},\
{145 , 3782},\
{148 , 3778},\
{148 , 3772},\
{138 , 3762},\
{133 , 3753},\
{133 , 3747},\
{135 , 3740},\
{135 , 3733},\
{135 , 3727},\
{135 , 3719},\
{138 , 3708},\
{138 , 3696},\
{133 , 3681},\
{133 , 3678},\
{143 , 3678},\
{148 , 3675},\
{155 , 3660},\
{148 , 3583},\
{168 , 3450},\
{445 , 3176},\
{353 , 3139},\
{328 , 3122},\
{293 , 3115},\
{273 , 3106},\
{265 , 3095},\
{228 , 3088},\
{218 , 3079},\
{188 , 3074},\
{185 , 3067},\
{173 , 3064},\
{173 , 3059},\
{185 , 3051},\
{183 , 3044},\
{190 , 3038},\
{198 , 3029},\
{230 , 3018},\
{258 , 3006},\
{260 , 2999},\
{278 , 2992},\
{325 , 2980},\
{325 , 2974},\
{375 , 2963},\
{375 , 2963},\
{375 , 2963}\
}


#define VALUE_83_ZERO \
{\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 }\
}

#endif

