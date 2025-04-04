/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause)
 *
 * Copyright (C) 2022 Renesas Electronics Corp.
 */
#ifndef __DT_BINDINGS_CLOCK_R9A09G057_CPG_H__
#define __DT_BINDINGS_CLOCK_R9A09G057_CPG_H__

#include <dt-bindings/clock/renesas-cpg-mssr.h>

/* R9A09G057 CPG Core Clocks */
#define R9A09G057_MAINCLK			0

/* R9A09G057 Module Clocks */
#define R9A09G057_CA55_CORECLK0			0
#define R9A09G057_CA55_CORECLK1			1
#define R9A09G057_CA55_CORECLK2			2
#define R9A09G057_CA55_CORECLK3			3
#define R9A09G057_CA55_SCLK			4
#define R9A09G057_CA55_PCLK			5
#define R9A09G057_CA55_ATCLK			6
#define R9A09G057_CA55_GICCLK			7
#define R9A09G057_CA55_PERIPHCLK		8
#define R9A09G057_CA55_ACLK			9
#define R9A09G057_CA55_TSCLK			10
#define R9A09G057_GIC_GICCLK			11
#define R9A09G057_SYC_CNT_CLK			12
#define R9A09G057_MHU_PCLK			13
#define R9A09G057_GPT0_PCLK_SFR			14
#define R9A09G057_GPT0_CLKS_GPT			15
#define R9A09G057_GPT1_PCLK_SFR			16
#define R9A09G057_GPT1_CLKS_GPT			17
#define R9A09G057_POEGA0_PCLK			18
#define R9A09G057_POEGB0_PCLK			19
#define R9A09G057_POEGC0_PCLK			20
#define R9A09G057_POEGD0_PCLK			21
#define R9A09G057_POEGA1_PCLK			22
#define R9A09G057_POEGB1_PCLK			23
#define R9A09G057_POEGC1_PCLK			24
#define R9A09G057_POEGD1_PCLK			25
#define R9A09G057_MCPU_CMTW0_CLKM		26
#define R9A09G057_MCPU_CMTW1_CLKM		27
#define R9A09G057_MCPU_CMTW2_CLKM		28
#define R9A09G057_MCPU_CMTW3_CLKM		29
#define R9A09G057_RCPU_CMTW0_CLKM		30
#define R9A09G057_RCPU_CMTW1_CLKM		31
#define R9A09G057_RCPU_CMTW2_CLKM		32
#define R9A09G057_RCPU_CMTW3_CLKM		33
#define R9A09G057_MCPU_OSTM0_PCLK		34
#define R9A09G057_MCPU_OSTM1_PCLK		35
#define R9A09G057_ACPU_OSTM0_PCLK		36
#define R9A09G057_ACPU_OSTM1_PCLK		37
#define R9A09G057_RCPU_OSTM0_PCLK		38
#define R9A09G057_RCPU_OSTM1_PCLK		39
#define R9A09G057_RCPU_OSTM2_PCLK		40
#define R9A09G057_RCPU_OSTM3_PCLK		41
#define R9A09G057_MCPU_WDT0_CLKP		42
#define R9A09G057_MCPU_WDT0_CLK_LOCO		43
#define R9A09G057_ACPU_WDT0_CLKP		44
#define R9A09G057_ACPU_WDT0_CLK_LOCO		45
#define R9A09G057_RCPU_WDT0_CLKP		46
#define R9A09G057_RCPU_WDT0_CLK_LOCO		47
#define R9A09G057_RCPU_WDT1_CLKP		48
#define R9A09G057_RCPU_WDT1_CLK_LOCO		49
#define R9A09G057_RTC_CLK_RTC			50
#define R9A09G057_RSPI0_PCLK			51
#define R9A09G057_RSPI0_PCLK_SFR		52
#define R9A09G057_RSPI0_TCLK			53
#define R9A09G057_RSPI1_PCLK			54
#define R9A09G057_RSPI1_PCLK_SFR		55
#define R9A09G057_RSPI1_TCLK			56
#define R9A09G057_RSPI2_PCLK			57
#define R9A09G057_RSPI2_PCLK_SFR		58
#define R9A09G057_RSPI2_TCLK			59
#define R9A09G057_RSCI0_PCLK			60
#define R9A09G057_RSCI0_PCLK_SFR		61
#define R9A09G057_RSCI0_TCLK			62
#define R9A09G057_RSCI0_PS_PS3_N		63
#define R9A09G057_RSCI0_PS_PS2_N		64
#define R9A09G057_RSCI0_PS_PS1_N		65
#define R9A09G057_RSCI1_PCLK			66
#define R9A09G057_RSCI1_PCLK_SFR		67
#define R9A09G057_RSCI1_TCLK			68
#define R9A09G057_RSCI1_PS_PS3_N		69
#define R9A09G057_RSCI1_PS_PS2_N		70
#define R9A09G057_RSCI1_PS_PS1_N		71
#define R9A09G057_RSCI2_PCLK			72
#define R9A09G057_RSCI2_PCLK_SFR		73
#define R9A09G057_RSCI2_TCLK			74
#define R9A09G057_RSCI2_PS_PS3_N		75
#define R9A09G057_RSCI2_PS_PS2_N		76
#define R9A09G057_RSCI2_PS_PS1_N		77
#define R9A09G057_RSCI3_PCLK			78
#define R9A09G057_RSCI3_PCLK_SFR		79
#define R9A09G057_RSCI3_TCLK			80
#define R9A09G057_RSCI3_PS_PS3_N		81
#define R9A09G057_RSCI3_PS_PS2_N		82
#define R9A09G057_RSCI3_PS_PS1_N		83
#define R9A09G057_RSCI4_PCLK			84
#define R9A09G057_RSCI4_PCLK_SFR		85
#define R9A09G057_RSCI4_TCLK			86
#define R9A09G057_RSCI4_PS_PS3_N		87
#define R9A09G057_RSCI4_PS_PS2_N		88
#define R9A09G057_RSCI4_PS_PS1_N		89
#define R9A09G057_RSCI5_PCLK			90
#define R9A09G057_RSCI5_PCLK_SFR		91
#define R9A09G057_RSCI5_TCLK			92
#define R9A09G057_RSCI5_PS_PS3_N		93
#define R9A09G057_RSCI5_PS_PS2_N		94
#define R9A09G057_RSCI5_PS_PS1_N		95
#define R9A09G057_RSCI6_PCLK			96
#define R9A09G057_RSCI6_PCLK_SFR		97
#define R9A09G057_RSCI6_TCLK			98
#define R9A09G057_RSCI6_PS_PS3_N		99
#define R9A09G057_RSCI6_PS_PS2_N		100
#define R9A09G057_RSCI6_PS_PS1_N		101
#define R9A09G057_RSCI7_PCLK			102
#define R9A09G057_RSCI7_PCLK_SFR		103
#define R9A09G057_RSCI7_TCLK			104
#define R9A09G057_RSCI7_PS_PS3_N		105
#define R9A09G057_RSCI7_PS_PS2_N		106
#define R9A09G057_RSCI7_PS_PS1_N		107
#define R9A09G057_RSCI8_PCLK			108
#define R9A09G057_RSCI8_PCLK_SFR		109
#define R9A09G057_RSCI8_TCLK			110
#define R9A09G057_RSCI8_PS_PS3_N		111
#define R9A09G057_RSCI8_PS_PS2_N		112
#define R9A09G057_RSCI8_PS_PS1_N		113
#define R9A09G057_RSCI9_PCLK			114
#define R9A09G057_RSCI9_PCLK_SFR		115
#define R9A09G057_RSCI9_TCLK			116
#define R9A09G057_RSCI9_PS_PS3_N		117
#define R9A09G057_RSCI9_PS_PS2_N		118
#define R9A09G057_RSCI9_PS_PS1_N		119
#define R9A09G057_SCIF_CLK_PCK			120
#define R9A09G057_I3C_PCLKRW			121
#define R9A09G057_I3C_PCLK			122
#define R9A09G057_I3C_TCLK			123
#define R9A09G057_MCPU_RIIC8_CKM		124
#define R9A09G057_ACPU_RIIC0_CKM		125
#define R9A09G057_ACPU_RIIC1_CKM		126
#define R9A09G057_ACPU_RIIC2_CKM		127
#define R9A09G057_ACPU_RIIC3_CKM		128
#define R9A09G057_ACPU_RIIC4_CKM		129
#define R9A09G057_ACPU_RIIC5_CKM		130
#define R9A09G057_ACPU_RIIC6_CKM		131
#define R9A09G057_ACPU_RIIC7_CKM		132
#define R9A09G057_CANFD_PCLK			133
#define R9A09G057_CANFD_CLK_RAM			134
#define R9A09G057_CANFD_CLKC			135
#define R9A09G057_SPI_HCLK			136
#define R9A09G057_SPI_ACLK			137
#define R9A09G057_SPI_CLK_SPI			138
#define R9A09G057_SPI_CLK_SPIX2			139
#define R9A09G057_IOTOP_SHCLK			140
#define R9A09G057_SDHI0_IMCLK			141
#define R9A09G057_SDHI0_IMCLK2			142
#define R9A09G057_SDHI0_CLK_HS			143
#define R9A09G057_SDHI0_ACLK			144
#define R9A09G057_SDHI1_IMCLK			145
#define R9A09G057_SDHI1_IMCLK2			146
#define R9A09G057_SDHI1_CLK_HS			147
#define R9A09G057_SDHI1_ACLK			148
#define R9A09G057_SDHI2_IMCLK			149
#define R9A09G057_SDHI2_IMCLK2			150
#define R9A09G057_SDHI2_CLK_HS			151
#define R9A09G057_SDHI2_ACLK			152
#define R9A09G057_USB30_ACLK			153
#define R9A09G057_USB30_PCLK_USBTST		154
#define R9A09G057_USB30_REF_ALT_CLK_P		155
#define R9A09G057_USB30_CLKCORE			156
#define R9A09G057_USB31_ACLK			157
#define R9A09G057_USB31_PCLK_USBTST		158
#define R9A09G057_USB31_REF_ALT_CLK_P		159
#define R9A09G057_USB31_CLKCORE			160
#define R9A09G057_USB2_U2H0_HCLK		161
#define R9A09G057_USB2_U2H1_HCLK		162
#define R9A09G057_USB2_U2P_EXR_CPUCLK		163
#define R9A09G057_USB2_PCLK_USBTST0		164
#define R9A09G057_USB2_PCLK_USBTST1		165
#define R9A09G057_USB2_CLKCORE0			166
#define R9A09G057_USB2_CLKCORE1			167
#define R9A09G057_GBETH0_CLK_TX_I		168
#define R9A09G057_GBETH0_CLK_RX_I		169
#define R9A09G057_GBETH0_CLK_TX_180_I		170
#define R9A09G057_GBETH0_CLK_RX_180_I		171
#define R9A09G057_GBETH0_CLK_PTP_REF_I		172
#define R9A09G057_GBETH0_ACLK_CSR_I		173
#define R9A09G057_GBETH0_ACLK_I			174
#define R9A09G057_GBETH1_CLK_TX_I		175
#define R9A09G057_GBETH1_CLK_RX_I		176
#define R9A09G057_GBETH1_CLK_TX_180_I		177
#define R9A09G057_GBETH1_CLK_RX_180_I		178
#define R9A09G057_GBETH1_CLK_PTP_REF_I		179
#define R9A09G057_GBETH1_ACLK_CSR_I		180
#define R9A09G057_GBETH1_ACLK_I			181
#define R9A09G057_PCIE_ACLK			182
#define R9A09G057_PCIE_CLK_PMU			183
#define R9A09G057_CRU0_ACLK			184
#define R9A09G057_CRU0_VCLK			185
#define R9A09G057_CRU0_PCLK			186
#define R9A09G057_CRU1_ACLK			187
#define R9A09G057_CRU1_VCLK			188
#define R9A09G057_CRU1_PCLK			189
#define R9A09G057_CRU2_ACLK			190
#define R9A09G057_CRU2_VCLK			191
#define R9A09G057_CRU2_PCLK			192
#define R9A09G057_CRU3_ACLK			193
#define R9A09G057_CRU3_VCLK			194
#define R9A09G057_CRU3_PCLK			195
#define R9A09G057_CRU0_M_XI			196
#define R9A09G057_CRU1_M_XI			197
#define R9A09G057_CRU2_M_XI			198
#define R9A09G057_CRU3_M_XI			199
#define R9A09G057_ISU_ACLK			200
#define R9A09G057_ISU_PCLK			201
#define R9A09G057_DSI_PCLK			202
#define R9A09G057_DSI_ACLK			203
#define R9A09G057_DSI_VCLK1			204
#define R9A09G057_DSI_LPCLK			205
#define R9A09G057_DSI_PLLREFCLK			206
#define R9A09G057_LCDC_CLK_A			207
#define R9A09G057_LCDC_CLK_P			208
#define R9A09G057_LCDC_CLK_D			209
#define R9A09G057_GPU_CLK			210
#define R9A09G057_GPU_AXI_CLK			211
#define R9A09G057_GPU_ACE_CLK			212
#define R9A09G057_VCD_ACLK			213
#define R9A09G057_VCD_PCLK			214
#define R9A09G057_SSIF_CLK			215
#define R9A09G057_SCU_CLK			216
#define R9A09G057_SCU_CLKX2			217
#define R9A09G057_DMACPP_CLK			218
#define R9A09G057_ADG_CLKS1			219
#define R9A09G057_ADG_CLK_195M			220
#define R9A09G057_ADG_AUDIO_CLKA		221
#define R9A09G057_ADG_AUDIO_CLKB		222
#define R9A09G057_ADG_AUDIO_CLKC		223
#define R9A09G057_SPDIF0_CLKP			224
#define R9A09G057_SPDIF1_CLKP			225
#define R9A09G057_SPDIF2_CLKP			226
#define R9A09G057_ADC_PCLK			227
#define R9A09G057_ADC_ADCLK			228
#define R9A09G057_TSU0_PCLK			229
#define R9A09G057_TSU1_PCLK			230
#define R9A09G057_ICU_PCLK_I			231
#define R9A09G057_DRP_DCLKIN			232
#define R9A09G057_DRP_ACLK			233
#define R9A09G057_DRP_INITCLK			234
#define R9A09G057_DRPAI_DCLKIN			235
#define R9A09G057_DRPAI_ACLK			236
#define R9A09G057_DRPAI_INITCLK			237
#define R9A09G057_DRPAI_MCLK			238
#define R9A09G057_ACPU_DMAC_0_ACLK		239
#define R9A09G057_ACPU_DMAC_1_ACLK		240
#define R9A09G057_MCPU_DMAC_0_ACLK		241
#define R9A09G057_RCPU_DMAC_0_ACLK		242
#define R9A09G057_RCPU_DMAC_1_ACLK		243
#define R9A09G057_SSI9_CLK			244
#define R9A09G057_SSI8_CLK			245
#define R9A09G057_SSI7_CLK			246
#define R9A09G057_SSI6_CLK			247
#define R9A09G057_SSI5_CLK			248
#define R9A09G057_SSI4_CLK			249
#define R9A09G057_SSI3_CLK			250
#define R9A09G057_SSI2_CLK			251
#define R9A09G057_SSI1_CLK			252
#define R9A09G057_SSI0_CLK			253
#define R9A09G057_SSIF_SUPPLY_CLK		254
#define R9A09G057_SRC9_CLK			255
#define R9A09G057_SRC8_CLK			256
#define R9A09G057_SRC7_CLK			257
#define R9A09G057_SRC6_CLK			258
#define R9A09G057_SRC5_CLK			259
#define R9A09G057_SRC4_CLK			260
#define R9A09G057_SRC3_CLK			261
#define R9A09G057_SRC2_CLK			262
#define R9A09G057_SRC1_CLK			263
#define R9A09G057_SRC0_CLK			264
#define R9A09G057_DVC0_CLK			265
#define R9A09G057_DVC1_CLK			266
#define R9A09G057_CTU0_MIX0_CLK			267
#define R9A09G057_CTU1_MIX1_CLK			268
#define R9A09G057_SCU_SUPPLY_CLK		269
#define R9A09G057_ADG_SSI0_CLK			270
#define R9A09G057_ADG_SSI1_CLK			271
#define R9A09G057_ADG_SSI2_CLK			272
#define R9A09G057_ADG_SSI3_CLK			273
#define R9A09G057_ADG_SSI4_CLK			274
#define R9A09G057_ADG_SSI5_CLK			275
#define R9A09G057_ADG_SSI6_CLK			276
#define R9A09G057_ADG_SSI7_CLK			277
#define R9A09G057_ADG_SSI8_CLK			278
#define R9A09G057_ADG_SSI9_CLK			279
#define R9A09G057_ADG_SPDIF0_CLK		280
#define R9A09G057_ADG_SPDIF1_CLK		281
#define R9A09G057_ADG_SPDIF2_CLK		282

/* R9A09G057 Resets */
#define R9A09G057_CA55_NCPUPORESET3		0
#define R9A09G057_CA55_NCPUPORESET2		1
#define R9A09G057_CA55_NCPUPORESET1		2
#define R9A09G057_CA55_NCPUPORESET0		3
#define R9A09G057_CA55_NCORERESET3		4
#define R9A09G057_CA55_NCORERESET2		5
#define R9A09G057_CA55_NCORERESET1		6
#define R9A09G057_CA55_NCORERESET0		7
#define R9A09G057_CA55_NSPORESET		8
#define R9A09G057_CA55_NSRESET			9
#define R9A09G057_CA55_NPRESET			10
#define R9A09G057_CA55_NATRESET			11
#define R9A09G057_CA55_NGICRESET		12
#define R9A09G057_CA55_NPERIPHRESET		13
#define R9A09G057_CA55_NPDBGRESET		14
#define R9A09G057_CA55_NARESET			15
#define R9A09G057_CA55_NMISCRESET		16
#define R9A09G057_GIC_GICRESET_N		17
#define R9A09G057_GIC_DBG_GICRESET_N		18
#define R9A09G057_SYC_RESETN			19
#define R9A09G057_MHU_PRESETN			20
#define R9A09G057_GPT0_RST_P_REG		21
#define R9A09G057_GPT0_RST_S_REG		22
#define R9A09G057_GPT1_RST_P_REG		23
#define R9A09G057_GPT1_RST_S_REG		24
#define R9A09G057_POEGA0_RST			25
#define R9A09G057_POEGB0_RST			26
#define R9A09G057_POEGC0_RST			27
#define R9A09G057_POEGD0_RST			28
#define R9A09G057_POEGA1_RST			29
#define R9A09G057_POEGB1_RST			30
#define R9A09G057_POEGC1_RST			31
#define R9A09G057_POEGD1_RST			32
#define R9A09G057_MCPU_CMTW0_RST_M		33
#define R9A09G057_MCPU_CMTW1_RST_M		34
#define R9A09G057_MCPU_CMTW2_RST_M		35
#define R9A09G057_MCPU_CMTW3_RST_M		36
#define R9A09G057_RCPU_CMTW0_RST_M		37
#define R9A09G057_RCPU_CMTW1_RST_M		38
#define R9A09G057_RCPU_CMTW2_RST_M		39
#define R9A09G057_RCPU_CMTW3_RST_M		40
#define R9A09G057_MCPU_OSTM0_PRESETZ		41
#define R9A09G057_MCPU_OSTM1_PRESETZ		42
#define R9A09G057_ACPU_OSTM0_PRESETZ		43
#define R9A09G057_ACPU_OSTM1_PRESETZ		44
#define R9A09G057_RCPU_OSTM0_PRESETZ		45
#define R9A09G057_RCPU_OSTM1_PRESETZ		46
#define R9A09G057_RCPU_OSTM2_PRESETZ		47
#define R9A09G057_RCPU_OSTM3_PRESETZ		48
#define R9A09G057_MCPU_WDT0_RESET		49
#define R9A09G057_ACPU_WDT0_RESET		50
#define R9A09G057_RCPU_WDT0_RESET		51
#define R9A09G057_RCPU_WDT1_RESET		52
#define R9A09G057_RTC_RST_RTC			53
#define R9A09G057_RTC_RST_RTC_V			54
#define R9A09G057_RSPI0_PRESETN			55
#define R9A09G057_RSPI0_TRESETN			56
#define R9A09G057_RSPI1_PRESETN			57
#define R9A09G057_RSPI1_TRESETN			58
#define R9A09G057_RSPI2_PRESETN			59
#define R9A09G057_RSPI2_TRESETN			60
#define R9A09G057_RSCI0_PRESETN			61
#define R9A09G057_RSCI0_TRESETN			62
#define R9A09G057_RSCI1_PRESETN			63
#define R9A09G057_RSCI1_TRESETN			64
#define R9A09G057_RSCI2_PRESETN			65
#define R9A09G057_RSCI2_TRESETN			66
#define R9A09G057_RSCI3_PRESETN			67
#define R9A09G057_RSCI3_TRESETN			68
#define R9A09G057_RSCI4_PRESETN			69
#define R9A09G057_RSCI4_TRESETN			70
#define R9A09G057_RSCI5_PRESETN			71
#define R9A09G057_RSCI5_TRESETN			72
#define R9A09G057_RSCI6_PRESETN			73
#define R9A09G057_RSCI6_TRESETN			74
#define R9A09G057_RSCI7_PRESETN			75
#define R9A09G057_RSCI7_TRESETN			76
#define R9A09G057_RSCI8_PRESETN			77
#define R9A09G057_RSCI8_TRESETN			78
#define R9A09G057_RSCI9_PRESETN			79
#define R9A09G057_RSCI9_TRESETN			80
#define R9A09G057_SCIF_RST_SYSTEM_N		81
#define R9A09G057_I3C_PRESETN			82
#define R9A09G057_I3C_TRESETN			83
#define R9A09G057_MCPU_RIIC8_MRST		84
#define R9A09G057_ACPU_RIIC0_MRST		85
#define R9A09G057_ACPU_RIIC1_MRST		86
#define R9A09G057_ACPU_RIIC2_MRST		87
#define R9A09G057_ACPU_RIIC3_MRST		88
#define R9A09G057_ACPU_RIIC4_MRST		89
#define R9A09G057_ACPU_RIIC5_MRST		90
#define R9A09G057_ACPU_RIIC6_MRST		91
#define R9A09G057_ACPU_RIIC7_MRST		92
#define R9A09G057_CANFD_RSTP_N			93
#define R9A09G057_CANFD_RSTC_N			94
#define R9A09G057_SPI_HRESETN			95
#define R9A09G057_SPI_ARESETN			96
#define R9A09G057_IOTOP_RESETN			97
#define R9A09G057_IOTOP_ERROR_RESETN		98
#define R9A09G057_SDHI0_IXRST			99
#define R9A09G057_SDHI1_IXRST			100
#define R9A09G057_SDHI2_IXRST			101
#define R9A09G057_USB30_ARESETN			102
#define R9A09G057_USB31_ARESETN			103
#define R9A09G057_USB2_U2H0_HRESETN		104
#define R9A09G057_USB2_U2H1_HRESETN		105
#define R9A09G057_USB2_U2P_EXL_SYSRST		106
#define R9A09G057_USB2_PRESETN			107
#define R9A09G057_GBETH0_ARESETN_I		108
#define R9A09G057_GBETH1_ARESETN_I		109
#define R9A09G057_PCIE_ARESETN			110
#define R9A09G057_CRU0_PRESETN			111
#define R9A09G057_CRU0_ARESETN			112
#define R9A09G057_CRU0_S_RESETN			113
#define R9A09G057_CRU1_PRESETN			114
#define R9A09G057_CRU1_ARESETN			115
#define R9A09G057_CRU1_S_RESETN			116
#define R9A09G057_CRU2_PRESETN			117
#define R9A09G057_CRU2_ARESETN			118
#define R9A09G057_CRU2_S_RESETN			119
#define R9A09G057_CRU3_PRESETN			120
#define R9A09G057_CRU3_ARESETN			121
#define R9A09G057_CRU3_S_RESETN			122
#define R9A09G057_ISU_ARESETN			123
#define R9A09G057_ISU_PRESETN			124
#define R9A09G057_DSI_PRESETN			125
#define R9A09G057_DSI_ARESETN			126
#define R9A09G057_LCDC_RESET_N			127
#define R9A09G057_GPU_RESETN			128
#define R9A09G057_GPU_AXI_RESETN		129
#define R9A09G057_GPU_ACE_RESETN		130
#define R9A09G057_VCD_RESETN			131
#define R9A09G057_SSIF_0_ASYNC_RESET_SSI	132
#define R9A09G057_SSIF_0_SYNC_RESET_SSI0	133
#define R9A09G057_SSIF_0_SYNC_RESET_SSI1	134
#define R9A09G057_SSIF_0_SYNC_RESET_SSI2	135
#define R9A09G057_SSIF_0_SYNC_RESET_SSI3	136
#define R9A09G057_SSIF_0_SYNC_RESET_SSI4	137
#define R9A09G057_SSIF_0_SYNC_RESET_SSI5	138
#define R9A09G057_SSIF_0_SYNC_RESET_SSI6	139
#define R9A09G057_SSIF_0_SYNC_RESET_SSI7	140
#define R9A09G057_SSIF_0_SYNC_RESET_SSI8	141
#define R9A09G057_SSIF_0_SYNC_RESET_SSI9	142
#define R9A09G057_DMACPP_ARST			143
#define R9A09G057_SCU_RESET_SRU			144
#define R9A09G057_ADG_RST_RESET_ADG		145
#define R9A09G057_SPDIF_0_RST			146
#define R9A09G057_SPDIF_1_RST			147
#define R9A09G057_SPDIF_2_RST			148
#define R9A09G057_ADC_ADRST_N			149
#define R9A09G057_TSU0_PRESETN			150
#define R9A09G057_TSU1_PRESETN			151
#define R9A09G057_ICU_PRESETN			152
#define R9A09G057_DRP_ARESETN			153
#define R9A09G057_DRPAI_ARESETN			154
#define R9A09G057_ACPU_DMAC_0_ARESETN		155
#define R9A09G057_ACPU_DMAC_1_ARESETN		156
#define R9A09G057_MCPU_DMAC_0_ARESETN		157
#define R9A09G057_RCPU_DMAC_0_ARESETN		158
#define R9A09G057_RCPU_DMAC_1_ARESETN		159

#endif /* __DT_BINDINGS_CLOCK_R9A09G057_CPG_H__ */
