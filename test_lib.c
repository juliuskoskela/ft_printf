#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include "inc/ft_printf.h"
#include "libft/inc/libft.h"

#define DBL_NORM 123456789.333333333333333333333333333333

void				test_printf_float(double test_dbl)
{
	printf("1:     f:            >>>%f<<<\n", test_dbl);
	printf("2:     .f:           >>>%.f<<<\n", test_dbl);
	printf("3:     .0f:          >>>%.0f<<<\n", test_dbl);
	printf("4:     0.0f:         >>>%0.0f<<<\n", test_dbl);
	printf("5:     1f:           >>>%1f<<<\n", test_dbl);
	printf("6:     10f:          >>>%10f<<<\n", test_dbl);
	printf("7:     30f:          >>>%30f<<<\n", test_dbl);
	printf("8:     1.f:          >>>%1.f<<<\n", test_dbl);
	printf("9:     10.f:         >>>%10.f<<<\n", test_dbl);
	printf("10:     30.f:        >>>%30.f<<<\n", test_dbl);
	printf("11:     1.1f:        >>>%1.1f<<<\n", test_dbl);
	printf("12:     10.1f:       >>>%10.1f<<<\n", test_dbl);
	printf("13:     1.10f:       >>>%10.1f<<<\n", test_dbl);
	printf("14:     10.10f:      >>>%10.10f<<<\n", test_dbl);
	printf("15:     30.10f:      >>>%30.10f<<<\n", test_dbl);
	printf("16:     10.30f:      >>>%10.30f<<<\n", test_dbl);

	printf("17:     #f:          >>>%#f<<<\n", test_dbl);
	printf("18:     #.f:         >>>%#.f<<<\n", test_dbl);
	printf("19:     #.0f:        >>>%#.0f<<<\n", test_dbl);
	printf("20:     #0.0f:       >>>%#0.0f<<<\n", test_dbl);
	printf("21:     #1f:         >>>%#1f<<<\n", test_dbl);
	printf("22:     #10f:        >>>%#10f<<<\n", test_dbl);
	printf("23:     #30f:        >>>%#30f<<<\n", test_dbl);
	printf("24:     #1.f:        >>>%#1.f<<<\n", test_dbl);
	printf("25:     #10.f:       >>>%#10.f<<<\n", test_dbl);
	printf("26:     #30.f:       >>>%#30.f<<<\n", test_dbl);
	printf("27:     #1.1f:       >>>%#1.1f<<<\n", test_dbl);
	printf("28:     #10.1f:      >>>%#10.1f<<<\n", test_dbl);
	printf("29:     #1.10f:      >>>%#10.1f<<<\n", test_dbl);
	printf("30:     #10.10f:     >>>%#10.10f<<<\n", test_dbl);
	printf("31:     #30.10f:     >>>%#30.10f<<<\n", test_dbl);
	printf("32:     #10.30f:     >>>%#10.30f<<<\n", test_dbl);

	printf("33:     0f:          >>>%0f<<<\n", test_dbl);
	printf("34:     0.f:         >>>%0.f<<<\n", test_dbl);
	printf("35:     0.0f:        >>>%0.0f<<<\n", test_dbl);
	printf("36:     00.0f:       >>>%00.0f<<<\n", test_dbl);
	printf("37:     01f:         >>>%01f<<<\n", test_dbl);
	printf("38:     010f:        >>>%010f<<<\n", test_dbl);
	printf("39:     030f:        >>>%030f<<<\n", test_dbl);
	printf("40:     01.f:        >>>%01.f<<<\n", test_dbl);
	printf("41:     010.f:       >>>%010.f<<<\n", test_dbl);
	printf("42:     030.f:       >>>%030.f<<<\n", test_dbl);
	printf("43:     01.1f:       >>>%01.1f<<<\n", test_dbl);
	printf("44:     010.1f:      >>>%010.1f<<<\n", test_dbl);
	printf("45:     01.10f:      >>>%010.1f<<<\n", test_dbl);
	printf("46:     010.10f:     >>>%010.10f<<<\n", test_dbl);
	printf("47:     030.10f:     >>>%030.10f<<<\n", test_dbl);
	printf("48:     010.30f:     >>>%010.30f<<<\n", test_dbl);

	printf("49:     -#f:         >>>%-#f<<<\n", test_dbl);
	printf("50:     -#.f:        >>>%-#.f<<<\n", test_dbl);
	printf("51:     -#.0f:       >>>%-#.0f<<<\n", test_dbl);
	printf("52:     -#0.0f:      >>>%-#0.0f<<<\n", test_dbl);
	printf("53:     -#1f:        >>>%-#1f<<<\n", test_dbl);
	printf("54:     -#10f:       >>>%-#10f<<<\n", test_dbl);
	printf("55:     -#30f:       >>>%-#30f<<<\n", test_dbl);
	printf("56:     -#1.f:       >>>%-#1.f<<<\n", test_dbl);
	printf("57:     -#10.f:      >>>%-#10.f<<<\n", test_dbl);
	printf("58:     -#30.f:      >>>%-#30.f<<<\n", test_dbl);
	printf("59:     -#1.1f:      >>>%-#1.1f<<<\n", test_dbl);
	printf("60:     -#10.1f:     >>>%-#10.1f<<<\n", test_dbl);
	printf("61:     -#1.10f:     >>>%-#10.1f<<<\n", test_dbl);
	printf("62:     -#10.10f:    >>>%-#10.10f<<<\n", test_dbl);
	printf("63:     -#30.10f:    >>>%-#30.10f<<<\n", test_dbl);
	printf("64:     -#10.30f:    >>>%-#10.30f<<<\n", test_dbl);

	printf("65:     +0f:         >>>%+0f<<<\n", test_dbl);
	printf("66:     +0.f:        >>>%+0.f<<<\n", test_dbl);
	printf("67:     +0.0f:       >>>%+0.0f<<<\n", test_dbl);
	printf("68:     +00.0f:      >>>%+00.0f<<<\n", test_dbl);
	printf("69:     +01f:        >>>%+01f<<<\n", test_dbl);
	printf("70:     +010f:       >>>%+010f<<<\n", test_dbl);
	printf("71:     +030f:       >>>%+030f<<<\n", test_dbl);
	printf("72:     +01.f:       >>>%+01.f<<<\n", test_dbl);
	printf("73:     +010.f:      >>>%+010.f<<<\n", test_dbl);
	printf("74:     +030.f:      >>>%+030.f<<<\n", test_dbl);
	printf("75:     +01.1f:      >>>%+01.1f<<<\n", test_dbl);
	printf("76:     +010.1f:     >>>%+010.1f<<<\n", test_dbl);
	printf("77:     +01.10f:     >>>%+010.1f<<<\n", test_dbl);
	printf("78:     +010.10f:    >>>%+010.10f<<<\n", test_dbl);
	printf("79:     +030.10f:    >>>%+030.10f<<<\n", test_dbl);
	printf("80:     +010.30f:    >>>%+010.30f<<<\n", test_dbl);
}

void				test_printf_scientific(double test_dbl)
{
	printf("1:     e:            >>>%e<<<\n", test_dbl);
	printf("2:     .e:           >>>%.e<<<\n", test_dbl);
	printf("3:     .0e:          >>>%.0e<<<\n", test_dbl);
	printf("4:     0.0e:         >>>%0.0e<<<\n", test_dbl);
	printf("5:     1e:           >>>%1e<<<\n", test_dbl);
	printf("6:     10e:          >>>%10e<<<\n", test_dbl);
	printf("7:     30e:          >>>%30e<<<\n", test_dbl);
	printf("8:     1.e:          >>>%1.e<<<\n", test_dbl);
	printf("9:     10.e:         >>>%10.e<<<\n", test_dbl);
	printf("10:     30.e:        >>>%30.e<<<\n", test_dbl);
	printf("11:     1.1e:        >>>%1.1e<<<\n", test_dbl);
	printf("12:     10.1e:       >>>%10.1e<<<\n", test_dbl);
	printf("13:     1.10e:       >>>%10.1e<<<\n", test_dbl);
	printf("14:     10.10e:      >>>%10.10e<<<\n", test_dbl);
	printf("15:     30.10e:      >>>%30.10e<<<\n", test_dbl);
	printf("16:     10.30e:      >>>%10.30e<<<\n", test_dbl);

	printf("17:     #e:          >>>%#e<<<\n", test_dbl);
	printf("18:     #.e:         >>>%#.e<<<\n", test_dbl);
	printf("19:     #.0e:        >>>%#.0e<<<\n", test_dbl);
	printf("20:     #0.0e:       >>>%#0.0e<<<\n", test_dbl);
	printf("21:     #1e:         >>>%#1e<<<\n", test_dbl);
	printf("22:     #10e:        >>>%#10e<<<\n", test_dbl);
	printf("23:     #30e:        >>>%#30e<<<\n", test_dbl);
	printf("24:     #1.e:        >>>%#1.e<<<\n", test_dbl);
	printf("25:     #10.e:       >>>%#10.e<<<\n", test_dbl);
	printf("26:     #30.e:       >>>%#30.e<<<\n", test_dbl);
	printf("27:     #1.1e:       >>>%#1.1e<<<\n", test_dbl);
	printf("28:     #10.1e:      >>>%#10.1e<<<\n", test_dbl);
	printf("29:     #1.10e:      >>>%#10.1e<<<\n", test_dbl);
	printf("30:     #10.10e:     >>>%#10.10e<<<\n", test_dbl);
	printf("31:     #30.10e:     >>>%#30.10e<<<\n", test_dbl);
	printf("32:     #10.30e:     >>>%#10.30e<<<\n", test_dbl);

	printf("33:     0e:          >>>%0e<<<\n", test_dbl);
	printf("34:     0.e:         >>>%0.e<<<\n", test_dbl);
	printf("35:     0.0e:        >>>%0.0e<<<\n", test_dbl);
	printf("36:     00.0e:       >>>%00.0e<<<\n", test_dbl);
	printf("37:     01e:         >>>%01e<<<\n", test_dbl);
	printf("38:     010e:        >>>%010e<<<\n", test_dbl);
	printf("39:     030e:        >>>%030e<<<\n", test_dbl);
	printf("40:     01.e:        >>>%01.e<<<\n", test_dbl);
	printf("41:     010.e:       >>>%010.e<<<\n", test_dbl);
	printf("42:     030.e:       >>>%030.e<<<\n", test_dbl);
	printf("43:     01.1e:       >>>%01.1e<<<\n", test_dbl);
	printf("44:     010.1e:      >>>%010.1e<<<\n", test_dbl);
	printf("45:     01.10e:      >>>%010.1e<<<\n", test_dbl);
	printf("46:     010.10e:     >>>%010.10e<<<\n", test_dbl);
	printf("47:     030.10e:     >>>%030.10e<<<\n", test_dbl);
	printf("48:     010.30e:     >>>%010.30e<<<\n", test_dbl);

	printf("49:     -#e:         >>>%-#e<<<\n", test_dbl);
	printf("50:     -#.e:        >>>%-#.e<<<\n", test_dbl);
	printf("51:     -#.0e:       >>>%-#.0e<<<\n", test_dbl);
	printf("52:     -#0.0e:      >>>%-#0.0e<<<\n", test_dbl);
	printf("53:     -#1e:        >>>%-#1e<<<\n", test_dbl);
	printf("54:     -#10e:       >>>%-#10e<<<\n", test_dbl);
	printf("55:     -#30e:       >>>%-#30e<<<\n", test_dbl);
	printf("56:     -#1.e:       >>>%-#1.e<<<\n", test_dbl);
	printf("57:     -#10.e:      >>>%-#10.e<<<\n", test_dbl);
	printf("58:     -#30.e:      >>>%-#30.e<<<\n", test_dbl);
	printf("59:     -#1.1e:      >>>%-#1.1e<<<\n", test_dbl);
	printf("60:     -#10.1e:     >>>%-#10.1e<<<\n", test_dbl);
	printf("61:     -#1.10e:     >>>%-#10.1e<<<\n", test_dbl);
	printf("62:     -#10.10e:    >>>%-#10.10e<<<\n", test_dbl);
	printf("63:     -#30.10e:    >>>%-#30.10e<<<\n", test_dbl);
	printf("64:     -#10.30e:    >>>%-#10.30e<<<\n", test_dbl);

	printf("65:     +0e:         >>>%+0e<<<\n", test_dbl);
	printf("66:     +0.e:        >>>%+0.e<<<\n", test_dbl);
	printf("67:     +0.0e:       >>>%+0.0e<<<\n", test_dbl);
	printf("68:     +00.0e:      >>>%+00.0e<<<\n", test_dbl);
	printf("69:     +01e:        >>>%+01e<<<\n", test_dbl);
	printf("70:     +010e:       >>>%+010e<<<\n", test_dbl);
	printf("71:     +030e:       >>>%+030e<<<\n", test_dbl);
	printf("72:     +01.e:       >>>%+01.e<<<\n", test_dbl);
	printf("73:     +010.e:      >>>%+010.e<<<\n", test_dbl);
	printf("74:     +030.e:      >>>%+030.e<<<\n", test_dbl);
	printf("75:     +01.1e:      >>>%+01.1e<<<\n", test_dbl);
	printf("76:     +010.1e:     >>>%+010.1e<<<\n", test_dbl);
	printf("77:     +01.10e:     >>>%+010.1e<<<\n", test_dbl);
	printf("78:     +010.10e:    >>>%+010.10e<<<\n", test_dbl);
	printf("79:     +030.10e:    >>>%+030.10e<<<\n", test_dbl);
	printf("80:     +010.30e:    >>>%+010.30e<<<\n", test_dbl);
}

void				test_printf_hexa(uint64_t test_uint)
{
	printf("1:      x:           >>>%x<<<\n", test_uint);
	printf("2:      .x:          >>>%.x<<<\n", test_uint);
	printf("3:      .0x:         >>>%.0x<<<\n", test_uint);
	printf("4:      0.0x:        >>>%0.0x<<<\n", test_uint);
	printf("5:      1x:          >>>%1x<<<\n", test_uint);
	printf("6:      10x:         >>>%10x<<<\n", test_uint);
	printf("7:      30x:         >>>%30x<<<\n", test_uint);
	printf("8:      1.x:         >>>%1.x<<<\n", test_uint);
	printf("9:      10.x:        >>>%10.x<<<\n", test_uint);
	printf("10:     30.x:        >>>%30.x<<<\n", test_uint);
	printf("11:     1.1x:        >>>%1.1x<<<\n", test_uint);
	printf("12:     10.1x:       >>>%10.1x<<<\n", test_uint);
	printf("13:     1.10x:       >>>%10.1x<<<\n", test_uint);
	printf("14:     10.10x:      >>>%10.10x<<<\n", test_uint);
	printf("15:     30.10x:      >>>%30.10x<<<\n", test_uint);
	printf("16:     10.30x:      >>>%10.30x<<<\n", test_uint);

	printf("17:     #x:          >>>%#x<<<\n", test_uint);
	printf("18:     #.x:         >>>%#.x<<<\n", test_uint);
	printf("19:     #.0x:        >>>%#.0x<<<\n", test_uint);
	printf("20:     #0.0x:       >>>%#0.0x<<<\n", test_uint);
	printf("21:     #1x:         >>>%#1x<<<\n", test_uint);
	printf("22:     #10x:        >>>%#10x<<<\n", test_uint);
	printf("23:     #30x:        >>>%#30x<<<\n", test_uint);
	printf("24:     #1.x:        >>>%#1.x<<<\n", test_uint);
	printf("25:     #10.x:       >>>%#10.x<<<\n", test_uint);
	printf("26:     #30.x:       >>>%#30.x<<<\n", test_uint);
	printf("27:     #1.1x:       >>>%#1.1x<<<\n", test_uint);
	printf("28:     #10.1x:      >>>%#10.1x<<<\n", test_uint);
	printf("29:     #1.10x:      >>>%#10.1x<<<\n", test_uint);
	printf("30:     #10.10x:     >>>%#10.10x<<<\n", test_uint);
	printf("31:     #30.10x:     >>>%#30.10x<<<\n", test_uint);
	printf("32:     #10.30x:     >>>%#10.30x<<<\n", test_uint);

	printf("33:     0x:          >>>%0x<<<\n", test_uint);
	printf("34:     0.x:         >>>%0.x<<<\n", test_uint);
	printf("35:     0.0x:        >>>%0.0x<<<\n", test_uint);
	printf("36:     00.0x:       >>>%00.0x<<<\n", test_uint);
	printf("37:     01x:         >>>%01x<<<\n", test_uint);
	printf("38:     010x:        >>>%010x<<<\n", test_uint);
	printf("39:     030x:        >>>%030x<<<\n", test_uint);
	printf("40:     01.x:        >>>%01.x<<<\n", test_uint);
	printf("41:     010.x:       >>>%010.x<<<\n", test_uint);
	printf("42:     030.x:       >>>%030.x<<<\n", test_uint);
	printf("43:     01.1x:       >>>%01.1x<<<\n", test_uint);
	printf("44:     010.1x:      >>>%010.1x<<<\n", test_uint);
	printf("45:     01.10x:      >>>%010.1x<<<\n", test_uint);
	printf("46:     010.10x:     >>>%010.10x<<<\n", test_uint);
	printf("47:     030.10x:     >>>%030.10x<<<\n", test_uint);
	printf("48:     010.30x:     >>>%010.30x<<<\n", test_uint);

	printf("49:     -#x:         >>>%-#x<<<\n", test_uint);
	printf("50:     -#.x:        >>>%-#.x<<<\n", test_uint);
	printf("51:     -#.0x:       >>>%-#.0x<<<\n", test_uint);
	printf("52:     -#0.0x:      >>>%-#0.0x<<<\n", test_uint);
	printf("53:     -#1x:        >>>%-#1x<<<\n", test_uint);
	printf("54:     -#10x:       >>>%-#10x<<<\n", test_uint);
	printf("55:     -#30x:       >>>%-#30x<<<\n", test_uint);
	printf("56:     -#1.x:       >>>%-#1.x<<<\n", test_uint);
	printf("57:     -#10.x:      >>>%-#10.x<<<\n", test_uint);
	printf("58:     -#30.x:      >>>%-#30.x<<<\n", test_uint);
	printf("59:     -#1.1x:      >>>%-#1.1x<<<\n", test_uint);
	printf("60:     -#10.1x:     >>>%-#10.1x<<<\n", test_uint);
	printf("61:     -#1.10x:     >>>%-#10.1x<<<\n", test_uint);
	printf("62:     -#10.10x:    >>>%-#10.10x<<<\n", test_uint);
	printf("63:     -#30.10x:    >>>%-#30.10x<<<\n", test_uint);
	printf("64:     -#10.30x:    >>>%-#10.30x<<<\n", test_uint);

	printf("65:     +0x:         >>>%+0x<<<\n", test_uint);
	printf("66:     +0.x:        >>>%+0.x<<<\n", test_uint);
	printf("67:     +0.0x:       >>>%+0.0x<<<\n", test_uint);
	printf("68:     +00.0x:      >>>%+00.0x<<<\n", test_uint);
	printf("69:     +01x:        >>>%+01x<<<\n", test_uint);
	printf("70:     +010x:       >>>%+010x<<<\n", test_uint);
	printf("71:     +030x:       >>>%+030x<<<\n", test_uint);
	printf("72:     +01.x:       >>>%+01.x<<<\n", test_uint);
	printf("73:     +010.x:      >>>%+010.x<<<\n", test_uint);
	printf("74:     +030.x:      >>>%+030.x<<<\n", test_uint);
	printf("75:     +01.1x:      >>>%+01.1x<<<\n", test_uint);
	printf("76:     +010.1x:     >>>%+010.1x<<<\n", test_uint);
	printf("77:     +01.10x:     >>>%+010.1x<<<\n", test_uint);
	printf("78:     +010.10x:    >>>%+010.10x<<<\n", test_uint);
	printf("79:     +030.10x:    >>>%+030.10x<<<\n", test_uint);
	printf("80:     +010.30x:    >>>%+010.30x<<<\n", test_uint);
}

void				test_printf_octa(uint64_t test_uint)
{
	printf("1:      o:           >>>%o<<<\n", test_uint);
	printf("2:      .o:          >>>%.o<<<\n", test_uint);
	printf("3:      .0o:         >>>%.0o<<<\n", test_uint);
	printf("4:      0.0o:        >>>%0.0o<<<\n", test_uint);
	printf("5:      1o:          >>>%1o<<<\n", test_uint);
	printf("6:      10o:         >>>%10o<<<\n", test_uint);
	printf("7:      30o:         >>>%30o<<<\n", test_uint);
	printf("8:      1.o:         >>>%1.o<<<\n", test_uint);
	printf("9:      10.o:        >>>%10.o<<<\n", test_uint);
	printf("10:     30.o:        >>>%30.o<<<\n", test_uint);
	printf("11:     1.1o:        >>>%1.1o<<<\n", test_uint);
	printf("12:     10.1o:       >>>%10.1o<<<\n", test_uint);
	printf("13:     1.10o:       >>>%10.1o<<<\n", test_uint);
	printf("14:     10.10o:      >>>%10.10o<<<\n", test_uint);
	printf("15:     30.10o:      >>>%30.10o<<<\n", test_uint);
	printf("16:     10.30o:      >>>%10.30o<<<\n", test_uint);

	printf("17:     #o:          >>>%#o<<<\n", test_uint);
	printf("18:     #.o:         >>>%#.o<<<\n", test_uint);
	printf("19:     #.0o:        >>>%#.0o<<<\n", test_uint);
	printf("20:     #0.0o:       >>>%#0.0o<<<\n", test_uint);
	printf("21:     #1o:         >>>%#1o<<<\n", test_uint);
	printf("22:     #10o:        >>>%#10o<<<\n", test_uint);
	printf("23:     #30o:        >>>%#30o<<<\n", test_uint);
	printf("24:     #1.o:        >>>%#1.o<<<\n", test_uint);
	printf("25:     #10.o:       >>>%#10.o<<<\n", test_uint);
	printf("26:     #30.o:       >>>%#30.o<<<\n", test_uint);
	printf("27:     #1.1o:       >>>%#1.1o<<<\n", test_uint);
	printf("28:     #10.1o:      >>>%#10.1o<<<\n", test_uint);
	printf("29:     #1.10o:      >>>%#10.1o<<<\n", test_uint);
	printf("30:     #10.10o:     >>>%#10.10o<<<\n", test_uint);
	printf("31:     #30.10o:     >>>%#30.10o<<<\n", test_uint);
	printf("32:     #10.30o:     >>>%#10.30o<<<\n", test_uint);

	printf("33:     0o:          >>>%0o<<<\n", test_uint);
	printf("34:     0.o:         >>>%0.o<<<\n", test_uint);
	printf("35:     0.0o:        >>>%0.0o<<<\n", test_uint);
	printf("36:     00.0o:       >>>%00.0o<<<\n", test_uint);
	printf("37:     01o:         >>>%01o<<<\n", test_uint);
	printf("38:     010o:        >>>%010o<<<\n", test_uint);
	printf("39:     030o:        >>>%030o<<<\n", test_uint);
	printf("40:     01.o:        >>>%01.o<<<\n", test_uint);
	printf("41:     010.o:       >>>%010.o<<<\n", test_uint);
	printf("42:     030.o:       >>>%030.o<<<\n", test_uint);
	printf("43:     01.1o:       >>>%01.1o<<<\n", test_uint);
	printf("44:     010.1o:      >>>%010.1o<<<\n", test_uint);
	printf("45:     01.10o:      >>>%010.1o<<<\n", test_uint);
	printf("46:     010.10o:     >>>%010.10o<<<\n", test_uint);
	printf("47:     030.10o:     >>>%030.10o<<<\n", test_uint);
	printf("48:     010.30o:     >>>%010.30o<<<\n", test_uint);

	printf("49:     -#o:         >>>%-#o<<<\n", test_uint);
	printf("50:     -#.o:        >>>%-#.o<<<\n", test_uint);
	printf("51:     -#.0o:       >>>%-#.0o<<<\n", test_uint);
	printf("52:     -#0.0o:      >>>%-#0.0o<<<\n", test_uint);
	printf("53:     -#1o:        >>>%-#1o<<<\n", test_uint);
	printf("54:     -#10o:       >>>%-#10o<<<\n", test_uint);
	printf("55:     -#30o:       >>>%-#30o<<<\n", test_uint);
	printf("56:     -#1.o:       >>>%-#1.o<<<\n", test_uint);
	printf("57:     -#10.o:      >>>%-#10.o<<<\n", test_uint);
	printf("58:     -#30.o:      >>>%-#30.o<<<\n", test_uint);
	printf("59:     -#1.1o:      >>>%-#1.1o<<<\n", test_uint);
	printf("60:     -#10.1o:     >>>%-#10.1o<<<\n", test_uint);
	printf("61:     -#1.10o:     >>>%-#10.1o<<<\n", test_uint);
	printf("62:     -#10.10o:    >>>%-#10.10o<<<\n", test_uint);
	printf("63:     -#30.10o:    >>>%-#30.10o<<<\n", test_uint);
	printf("64:     -#10.30o:    >>>%-#10.30o<<<\n", test_uint);

	printf("65:     +0o:         >>>%+0o<<<\n", test_uint);
	printf("66:     +0.o:        >>>%+0.o<<<\n", test_uint);
	printf("67:     +0.0o:       >>>%+0.0o<<<\n", test_uint);
	printf("68:     +00.0o:      >>>%+00.0o<<<\n", test_uint);
	printf("69:     +01o:        >>>%+01o<<<\n", test_uint);
	printf("70:     +010o:       >>>%+010o<<<\n", test_uint);
	printf("71:     +030o:       >>>%+030o<<<\n", test_uint);
	printf("72:     +01.o:       >>>%+01.o<<<\n", test_uint);
	printf("73:     +010.o:      >>>%+010.o<<<\n", test_uint);
	printf("74:     +030.o:      >>>%+030.o<<<\n", test_uint);
	printf("75:     +01.1o:      >>>%+01.1o<<<\n", test_uint);
	printf("76:     +010.1o:     >>>%+010.1o<<<\n", test_uint);
	printf("77:     +01.10o:     >>>%+010.1o<<<\n", test_uint);
	printf("78:     +010.10o:    >>>%+010.10o<<<\n", test_uint);
	printf("79:     +030.10o:    >>>%+030.10o<<<\n", test_uint);
	printf("80:     +010.30o:    >>>%+010.30o<<<\n", test_uint);
}

void				test_printf_digit(int64_t test_int)
{
	printf("1:      d:           >>>%d<<<\n", test_int);
	printf("2:      .d:          >>>%.d<<<\n", test_int);
	printf("3:      .0d:         >>>%.0d<<<\n", test_int);
	printf("4:      0.0d:        >>>%0.0d<<<\n", test_int);
	printf("5:      1d:          >>>%1d<<<\n", test_int);
	printf("6:      10d:         >>>%10d<<<\n", test_int);
	printf("7:      30d:         >>>%30d<<<\n", test_int);
	printf("8:      1.d:         >>>%1.d<<<\n", test_int);
	printf("9:      10.d:        >>>%10.d<<<\n", test_int);
	printf("10:     30.d:        >>>%30.d<<<\n", test_int);
	printf("11:     1.1d:        >>>%1.1d<<<\n", test_int);
	printf("12:     10.1d:       >>>%10.1d<<<\n", test_int);
	printf("13:     1.10d:       >>>%10.1d<<<\n", test_int);
	printf("14:     10.10d:      >>>%10.10d<<<\n", test_int);
	printf("15:     30.10d:      >>>%30.10d<<<\n", test_int);
	printf("16:     10.30d:      >>>%10.30d<<<\n", test_int);

	printf("17:     #d:          >>>%#d<<<\n", test_int);
	printf("18:     #.d:         >>>%#.d<<<\n", test_int);
	printf("19:     #.0d:        >>>%#.0d<<<\n", test_int);
	printf("20:     #0.0d:       >>>%#0.0d<<<\n", test_int);
	printf("21:     #1d:         >>>%#1d<<<\n", test_int);
	printf("22:     #10d:        >>>%#10d<<<\n", test_int);
	printf("23:     #30d:        >>>%#30d<<<\n", test_int);
	printf("24:     #1.d:        >>>%#1.d<<<\n", test_int);
	printf("25:     #10.d:       >>>%#10.d<<<\n", test_int);
	printf("26:     #30.d:       >>>%#30.d<<<\n", test_int);
	printf("27:     #1.1d:       >>>%#1.1d<<<\n", test_int);
	printf("28:     #10.1d:      >>>%#10.1d<<<\n", test_int);
	printf("29:     #1.10d:      >>>%#10.1d<<<\n", test_int);
	printf("30:     #10.10d:     >>>%#10.10d<<<\n", test_int);
	printf("31:     #30.10d:     >>>%#30.10d<<<\n", test_int);
	printf("32:     #10.30d:     >>>%#10.30d<<<\n", test_int);

	printf("33:     0d:          >>>%0d<<<\n", test_int);
	printf("34:     0.d:         >>>%0.d<<<\n", test_int);
	printf("35:     0.0d:        >>>%0.0d<<<\n", test_int);
	printf("36:     00.0d:       >>>%00.0d<<<\n", test_int);
	printf("37:     01d:         >>>%01d<<<\n", test_int);
	printf("38:     010d:        >>>%010d<<<\n", test_int);
	printf("39:     030d:        >>>%030d<<<\n", test_int);
	printf("40:     01.d:        >>>%01.d<<<\n", test_int);
	printf("41:     010.d:       >>>%010.d<<<\n", test_int);
	printf("42:     030.d:       >>>%030.d<<<\n", test_int);
	printf("43:     01.1d:       >>>%01.1d<<<\n", test_int);
	printf("44:     010.1d:      >>>%010.1d<<<\n", test_int);
	printf("45:     01.10d:      >>>%010.1d<<<\n", test_int);
	printf("46:     010.10d:     >>>%010.10d<<<\n", test_int);
	printf("47:     030.10d:     >>>%030.10d<<<\n", test_int);
	printf("48:     010.30d:     >>>%010.30d<<<\n", test_int);

	printf("49:     -#d:         >>>%-#d<<<\n", test_int);
	printf("50:     -#.d:        >>>%-#.d<<<\n", test_int);
	printf("51:     -#.0d:       >>>%-#.0d<<<\n", test_int);
	printf("52:     -#0.0d:      >>>%-#0.0d<<<\n", test_int);
	printf("53:     -#1d:        >>>%-#1d<<<\n", test_int);
	printf("54:     -#10d:       >>>%-#10d<<<\n", test_int);
	printf("55:     -#30d:       >>>%-#30d<<<\n", test_int);
	printf("56:     -#1.d:       >>>%-#1.d<<<\n", test_int);
	printf("57:     -#10.d:      >>>%-#10.d<<<\n", test_int);
	printf("58:     -#30.d:      >>>%-#30.d<<<\n", test_int);
	printf("59:     -#1.1d:      >>>%-#1.1d<<<\n", test_int);
	printf("60:     -#10.1d:     >>>%-#10.1d<<<\n", test_int);
	printf("61:     -#1.10d:     >>>%-#10.1d<<<\n", test_int);
	printf("62:     -#10.10d:    >>>%-#10.10d<<<\n", test_int);
	printf("63:     -#30.10d:    >>>%-#30.10d<<<\n", test_int);
	printf("64:     -#10.30d:    >>>%-#10.30d<<<\n", test_int);

	printf("65:     +0d:         >>>%+0d<<<\n", test_int);
	printf("66:     +0.d:        >>>%+0.d<<<\n", test_int);
	printf("67:     +0.0d:       >>>%+0.0d<<<\n", test_int);
	printf("68:     +00.0d:      >>>%+00.0d<<<\n", test_int);
	printf("69:     +01d:        >>>%+01d<<<\n", test_int);
	printf("70:     +010d:       >>>%+010d<<<\n", test_int);
	printf("71:     +030d:       >>>%+030d<<<\n", test_int);
	printf("72:     +01.d:       >>>%+01.d<<<\n", test_int);
	printf("73:     +010.d:      >>>%+010.d<<<\n", test_int);
	printf("74:     +030.d:      >>>%+030.d<<<\n", test_int);
	printf("75:     +01.1d:      >>>%+01.1d<<<\n", test_int);
	printf("76:     +010.1d:     >>>%+010.1d<<<\n", test_int);
	printf("77:     +01.10d:     >>>%+010.1d<<<\n", test_int);
	printf("78:     +010.10d:    >>>%+010.10d<<<\n", test_int);
	printf("79:     +030.10d:    >>>%+030.10d<<<\n", test_int);
	printf("80:     +010.30d:    >>>%+010.30d<<<\n", test_int);
}

void				test_printf_int(int64_t test_int)
{
	printf("1:      i:           >>>%i<<<\n", test_int);
	printf("2:      .i:          >>>%.i<<<\n", test_int);
	printf("3:      .0i:         >>>%.0i<<<\n", test_int);
	printf("4:      0.0i:        >>>%0.0i<<<\n", test_int);
	printf("5:      1i:          >>>%1i<<<\n", test_int);
	printf("6:      10i:         >>>%10i<<<\n", test_int);
	printf("7:      30i:         >>>%30i<<<\n", test_int);
	printf("8:      1.i:         >>>%1.i<<<\n", test_int);
	printf("9:      10.i:        >>>%10.i<<<\n", test_int);
	printf("10:     30.i:        >>>%30.i<<<\n", test_int);
	printf("11:     1.1i:        >>>%1.1i<<<\n", test_int);
	printf("12:     10.1i:       >>>%10.1i<<<\n", test_int);
	printf("13:     1.10i:       >>>%10.1i<<<\n", test_int);
	printf("14:     10.10i:      >>>%10.10i<<<\n", test_int);
	printf("15:     30.10i:      >>>%30.10i<<<\n", test_int);
	printf("16:     10.30i:      >>>%10.30i<<<\n", test_int);

	printf("17:     #i:          >>>%#i<<<\n", test_int);
	printf("18:     #.i:         >>>%#.i<<<\n", test_int);
	printf("19:     #.0i:        >>>%#.0i<<<\n", test_int);
	printf("20:     #0.0i:       >>>%#0.0i<<<\n", test_int);
	printf("21:     #1i:         >>>%#1i<<<\n", test_int);
	printf("22:     #10i:        >>>%#10i<<<\n", test_int);
	printf("23:     #30i:        >>>%#30i<<<\n", test_int);
	printf("24:     #1.i:        >>>%#1.i<<<\n", test_int);
	printf("25:     #10.i:       >>>%#10.i<<<\n", test_int);
	printf("26:     #30.i:       >>>%#30.i<<<\n", test_int);
	printf("27:     #1.1i:       >>>%#1.1i<<<\n", test_int);
	printf("28:     #10.1i:      >>>%#10.1i<<<\n", test_int);
	printf("29:     #1.10i:      >>>%#10.1i<<<\n", test_int);
	printf("30:     #10.10i:     >>>%#10.10i<<<\n", test_int);
	printf("31:     #30.10i:     >>>%#30.10i<<<\n", test_int);
	printf("32:     #10.30i:     >>>%#10.30i<<<\n", test_int);

	printf("33:     0i:          >>>%0i<<<\n", test_int);
	printf("34:     0.i:         >>>%0.i<<<\n", test_int);
	printf("35:     0.0i:        >>>%0.0i<<<\n", test_int);
	printf("36:     00.0i:       >>>%00.0i<<<\n", test_int);
	printf("37:     01i:         >>>%01i<<<\n", test_int);
	printf("38:     010i:        >>>%010i<<<\n", test_int);
	printf("39:     030i:        >>>%030i<<<\n", test_int);
	printf("40:     01.i:        >>>%01.i<<<\n", test_int);
	printf("41:     010.i:       >>>%010.i<<<\n", test_int);
	printf("42:     030.i:       >>>%030.i<<<\n", test_int);
	printf("43:     01.1i:       >>>%01.1i<<<\n", test_int);
	printf("44:     010.1i:      >>>%010.1i<<<\n", test_int);
	printf("45:     01.10i:      >>>%010.1i<<<\n", test_int);
	printf("46:     010.10i:     >>>%010.10i<<<\n", test_int);
	printf("47:     030.10i:     >>>%030.10i<<<\n", test_int);
	printf("48:     010.30i:     >>>%010.30i<<<\n", test_int);

	printf("49:     -#i:         >>>%-#i<<<\n", test_int);
	printf("50:     -#.i:        >>>%-#.i<<<\n", test_int);
	printf("51:     -#.0i:       >>>%-#.0i<<<\n", test_int);
	printf("52:     -#0.0i:      >>>%-#0.0i<<<\n", test_int);
	printf("53:     -#1i:        >>>%-#1i<<<\n", test_int);
	printf("54:     -#10i:       >>>%-#10i<<<\n", test_int);
	printf("55:     -#30i:       >>>%-#30i<<<\n", test_int);
	printf("56:     -#1.i:       >>>%-#1.i<<<\n", test_int);
	printf("57:     -#10.i:      >>>%-#10.i<<<\n", test_int);
	printf("58:     -#30.i:      >>>%-#30.i<<<\n", test_int);
	printf("59:     -#1.1i:      >>>%-#1.1i<<<\n", test_int);
	printf("60:     -#10.1i:     >>>%-#10.1i<<<\n", test_int);
	printf("61:     -#1.10i:     >>>%-#10.1i<<<\n", test_int);
	printf("62:     -#10.10i:    >>>%-#10.10i<<<\n", test_int);
	printf("63:     -#30.10i:    >>>%-#30.10i<<<\n", test_int);
	printf("64:     -#10.30i:    >>>%-#10.30i<<<\n", test_int);

	printf("65:     +0i:         >>>%+0i<<<\n", test_int);
	printf("66:     +0.i:        >>>%+0.i<<<\n", test_int);
	printf("67:     +0.0i:       >>>%+0.0i<<<\n", test_int);
	printf("68:     +00.0i:      >>>%+00.0i<<<\n", test_int);
	printf("69:     +01i:        >>>%+01i<<<\n", test_int);
	printf("70:     +010i:       >>>%+010i<<<\n", test_int);
	printf("71:     +030i:       >>>%+030i<<<\n", test_int);
	printf("72:     +01.i:       >>>%+01.i<<<\n", test_int);
	printf("73:     +010.i:      >>>%+010.i<<<\n", test_int);
	printf("74:     +030.i:      >>>%+030.i<<<\n", test_int);
	printf("75:     +01.1i:      >>>%+01.1i<<<\n", test_int);
	printf("76:     +010.1i:     >>>%+010.1i<<<\n", test_int);
	printf("77:     +01.10i:     >>>%+010.1i<<<\n", test_int);
	printf("78:     +010.10i:    >>>%+010.10i<<<\n", test_int);
	printf("79:     +030.10i:    >>>%+030.10i<<<\n", test_int);
	printf("80:     +010.30i:    >>>%+010.30i<<<\n", test_int);
}

void				test_printf_uint(uint64_t test_uint)
{
	printf("1:      u:           >>>%u<<<\n", test_uint);
	printf("2:      .u:          >>>%.u<<<\n", test_uint);
	printf("3:      .0u:         >>>%.0u<<<\n", test_uint);
	printf("4:      0.0u:        >>>%0.0u<<<\n", test_uint);
	printf("5:      1u:          >>>%1u<<<\n", test_uint);
	printf("6:      10u:         >>>%10u<<<\n", test_uint);
	printf("7:      30u:         >>>%30u<<<\n", test_uint);
	printf("8:      1.u:         >>>%1.u<<<\n", test_uint);
	printf("9:      10.u:        >>>%10.u<<<\n", test_uint);
	printf("10:     30.u:        >>>%30.u<<<\n", test_uint);
	printf("11:     1.1u:        >>>%1.1u<<<\n", test_uint);
	printf("12:     10.1u:       >>>%10.1u<<<\n", test_uint);
	printf("13:     1.10u:       >>>%10.1u<<<\n", test_uint);
	printf("14:     10.10u:      >>>%10.10u<<<\n", test_uint);
	printf("15:     30.10u:      >>>%30.10u<<<\n", test_uint);
	printf("16:     10.30u:      >>>%10.30u<<<\n", test_uint);

	printf("17:     -u:          >>>%-u<<<\n", test_uint);
	printf("18:     -.u:         >>>%-.u<<<\n", test_uint);
	printf("19:     -.0u:        >>>%-.0u<<<\n", test_uint);
	printf("20:     -0.0u:       >>>%-0.0u<<<\n", test_uint);
	printf("21:     -1u:         >>>%-1u<<<\n", test_uint);
	printf("22:     -10u:        >>>%-10u<<<\n", test_uint);
	printf("23:     -30u:        >>>%-30u<<<\n", test_uint);
	printf("24:     -1.u:        >>>%-1.u<<<\n", test_uint);
	printf("25:     -10.u:       >>>%-10.u<<<\n", test_uint);
	printf("26:     -30.u:       >>>%-30.u<<<\n", test_uint);
	printf("27:     -1.1u:       >>>%-1.1u<<<\n", test_uint);
	printf("28:     -10.1u:      >>>%-10.1u<<<\n", test_uint);
	printf("29:     -1.10u:      >>>%-10.1u<<<\n", test_uint);
	printf("30:     -10.10u:     >>>%-10.10u<<<\n", test_uint);
	printf("31:     -30.10u:     >>>%-30.10u<<<\n", test_uint);
	printf("32:     -10.30u:     >>>%-10.30u<<<\n", test_uint);

	printf("33:     0u:          >>>%0u<<<\n", test_uint);
	printf("34:     0.u:         >>>%0.u<<<\n", test_uint);
	printf("35:     0.0u:        >>>%0.0u<<<\n", test_uint);
	printf("36:     00.0u:       >>>%00.0u<<<\n", test_uint);
	printf("37:     01u:         >>>%01u<<<\n", test_uint);
	printf("38:     010u:        >>>%010u<<<\n", test_uint);
	printf("39:     030u:        >>>%030u<<<\n", test_uint);
	printf("40:     01.u:        >>>%01.u<<<\n", test_uint);
	printf("41:     010.u:       >>>%010.u<<<\n", test_uint);
	printf("42:     030.u:       >>>%030.u<<<\n", test_uint);
	printf("43:     01.1u:       >>>%01.1u<<<\n", test_uint);
	printf("44:     010.1u:      >>>%010.1u<<<\n", test_uint);
	printf("45:     01.10u:      >>>%010.1u<<<\n", test_uint);
	printf("46:     010.10u:     >>>%010.10u<<<\n", test_uint);
	printf("47:     030.10u:     >>>%030.10u<<<\n", test_uint);
	printf("48:     010.30u:     >>>%010.30u<<<\n", test_uint);
}

void				test_printf_string()
{
	printf("1:      s:         >>>%s<<<\n", "barukkhazad");
	printf("2:      2s:        >>>%2s<<<\n", "barukkhazad");
	printf("3:      20s:       >>>%20s<<<\n", "barukkhazad");
	printf("4:      -20s:      >>>%-20s<<<\n", "barukkhazad");
	printf("5:      .2s:       >>>%.2s<<<\n", "barukkhazad");
	printf("6:      5.2s:      >>>%5.2s<<<\n", "barukkhazad");
	printf("6:      5.15s:     >>>%5.15s<<<\n", "barukkhazad");
	printf("6:      05.15s:    >>>%05.15s<<<\n", "barukkhazad");
	printf("7:      5.s:       >>>%5.s<<<\n", "barukkhazad");
	printf("8:      s          >>>%s <<<\n", "this is a string");
	printf("9:      s:         >>>%s  <<<\n", "this is a string");
	printf("10:     s:         >>>this is a %s<<<\n", "string");
	printf("11:     s:         >>>%s is a string<<<\n", "this");
	printf("12:     s:         >>>Line Feed %s<<<\n", "\\n");
	printf("13:     10s:       >>>%10s is a string<<<\n", "this");
	printf("14:     .2s:       >>>%.2s is a string<<<\n", "this");
	printf("15:     5.2s:      >>>%5.2s is a string<<<\n", "this");
	printf("16:     10s:       >>>%10s is a string<<<\n", "");
	printf("17:     .2:        >>>%.2s is a string<<<\n", "");
	printf("18:     5.2s:      >>>%5.2s is a string<<<\n", "");
	printf("19:     -10s:      >>>%-10s is a string<<<\n", "this");
	printf("20:     -.2s:      >>>%-.2s is a string<<<\n", "this");
	printf("21:     -5.2s:     >>>%-5.2s is a string<<<\n", "this");
	printf("22:     -10s:      >>>%-10s is a string<<<\n", "");
	printf("23:     -.2s:      >>>%-.2s is a string<<<\n", "");
	printf("24:     s s:       >>>%s %s<<<\n", "this", "is");
	printf("25:     -5.2s:     >>>%-5.2s is a string<<<\n", "asd");
	printf("26:     s s s:     >>>%s %s %s<<<\n", "this", "is", "a");
	printf("27:     s s s s:   >>>%s %s %s %s<<<\n", "this", "is", "a", "multi");
	printf("28:     s s s s:   >>>%s %s %s %s string. gg!<<<\n", "this", "is", "a", "multi", "string");
	printf("29:     sssss:     >>>%s%s%s%s%s<<<\n", "this", "is", "a", "multi", "string");
	printf("30:     s:         >>>Null pointer: %s<<<\n", NULL);
}

void				test_printf_char()
{
	printf("1:     c:          >>>%c<<<\n", 'c');
	printf("2:     10c:        >>>%10c<<<\n", 'c');
	printf("3:     -10c:       >>>%-10c<<<\n", 'c');
	printf("4:     010c:       >>>%-10c<<<\n", 'c');
	printf("9:      c          >>>% c<<<\n", 'c');
	printf("10:     %%          >>>Escape percent sign: %%<<<\n");
}

void				test_printf_pointer()
{
	char			c = 'c';
	void			*ptr = &c;

	printf("1:     p:          >>>%p<<<\n", ptr);
	printf("2:     30p:        >>>%30p<<<\n", ptr);
	printf("3:     030p:       >>>%030p<<<\n", ptr);
	printf("4:     -30p:       >>>%-30p<<<\n", ptr);
}

void				test_printf_sizes(double test_dbl, long double test_ldbl, int64_t test_int, uint64_t test_uint)
{
	printf("1:     hhu:         >>>%hhu<<<\n", test_uint);
	printf("2:     hu:          >>>%hu<<<\n", test_uint);
	printf("3:     lu:          >>>%lu<<<\n", test_uint);
	printf("4:     llu:         >>>%llu<<<\n", test_uint);
	printf("5:     Lu:          >>>%Lu<<<\n", test_uint);

	printf("1:     hhd:         >>>%hhd<<<\n", test_int);
	printf("2:     hd:          >>>%hd<<<\n", test_int);
	printf("3:     ld:          >>>%ld<<<\n", test_int);
	printf("4:     lld:         >>>%lld<<<\n", test_int);
	printf("5:     Ld:          >>>%Ld<<<\n", test_int);

	printf("1:     hhi:         >>>%hhi<<<\n", test_int);
	printf("2:     hi:          >>>%hi<<<\n", test_int);
	printf("3:     li:          >>>%li<<<\n", test_int);
	printf("4:     lli:         >>>%lli<<<\n", test_int);
	printf("5:     Li:          >>>%Li<<<\n", test_int);

	printf("1:     hhx:         >>>%hhx<<<\n", test_uint);
	printf("2:     hx:          >>>%hx<<<\n", test_uint);
	printf("3:     lx:          >>>%lx<<<\n", test_uint);
	printf("4:     llx:         >>>%llx<<<\n", test_uint);
	printf("5:     Lx:          >>>%Lx<<<\n", test_uint);

	printf("1:     hho:         >>>%hho<<<\n", test_uint);
	printf("2:     ho:          >>>%ho<<<\n", test_uint);
	printf("3:     lo:          >>>%lo<<<\n", test_uint);
	printf("4:     llo:         >>>%llo<<<\n", test_uint);
	printf("5:     Lo:          >>>%Lo<<<\n", test_uint);

	printf("1:     hhf:         >>>%hhf<<<\n", test_dbl);
	printf("2:     hf:          >>>%hf<<<\n", test_dbl);
	printf("3:     lf:          >>>%lf<<<\n", test_dbl);
	printf("4:     llf:         >>>%llf<<<\n", test_dbl);
	printf("5:     Lf:          >>>%Lf<<<\n", test_ldbl);
	printf("6:     Lf:          >>>%Lf<<<\n", test_ldbl);
	printf("7:     .100Lf:      >>>%.100Lf<<<\n", test_ldbl);
}

void				test_printf_undefined()
{
	printf("49:     -#u:         >>>%-#u<<<\n", 123456789);
	printf("50:     -#.u:        >>>%-#.u<<<\n", 123456789);
	printf("51:     -#.0u:       >>>%-#.0u<<<\n", 123456789);
	printf("52:     -#0.0u:      >>>%-#0.0u<<<\n", 123456789);
	printf("53:     -#1u:        >>>%-#1u<<<\n", 123456789);
	printf("54:     -#10u:       >>>%-#10u<<<\n", 123456789);
	printf("55:     -#30u:       >>>%-#30u<<<\n", 123456789);
	printf("56:     -#1.u:       >>>%-#1.u<<<\n", 123456789);
	printf("57:     -#10.u:      >>>%-#10.u<<<\n", 123456789);
	printf("58:     -#30.u:      >>>%-#30.u<<<\n", 123456789);
	printf("59:     -#1.1u:      >>>%-#1.1u<<<\n", 123456789);
	printf("60:     -#10.1u:     >>>%-#10.1u<<<\n", 123456789);
	printf("61:     -#1.10u:     >>>%-#10.1u<<<\n", 123456789);
	printf("62:     -#10.10u:    >>>%-#10.10u<<<\n", 123456789);
	printf("63:     -#30.10u:    >>>%-#30.10u<<<\n", 123456789);
	printf("64:     -#10.30u:    >>>%-#10.30u<<<\n", 123456789);

	printf("65:     +0u:         >>>%+0u<<<\n", 123456789);
	printf("66:     +0.u:        >>>%+0.u<<<\n", 123456789);
	printf("67:     +0.0u:       >>>%+0.0u<<<\n", 123456789);
	printf("68:     +00.0u:      >>>%+00.0u<<<\n", 123456789);
	printf("69:     +01u:        >>>%+01u<<<\n", 123456789);
	printf("70:     +010u:       >>>%+010u<<<\n", 123456789);
	printf("71:     +030u:       >>>%+030u<<<\n", 123456789);
	printf("72:     +01.u:       >>>%+01.u<<<\n", 123456789);
	printf("73:     +010.u:      >>>%+010.u<<<\n", 123456789);
	printf("74:     +030.u:      >>>%+030.u<<<\n", 123456789);
	printf("75:     +01.1u:      >>>%+01.1u<<<\n", 123456789);
	printf("76:     +010.1u:     >>>%+010.1u<<<\n", 123456789);
	printf("77:     +01.10u:     >>>%+010.1u<<<\n", 123456789);
	printf("78:     +010.10u:    >>>%+010.10u<<<\n", 123456789);
	printf("79:     +030.10u:    >>>%+030.10u<<<\n", 123456789);
	printf("80:     +010.30u:    >>>%+010.30u<<<\n", 123456789);
}

int main(int argc, char **argv)
{
	double		test_dbl;
	long double	test_ldbl;
	int64_t		test_int;
	uint64_t	test_uint;

	if (s_cmp("big", argv[2]) == 0)
	{
		test_dbl = DBL_MAX / 2;
		test_ldbl = LDBL_MAX / 2;
		test_int = LONG_MAX / 2;
		test_uint = ULONG_MAX / 2;
	}
	else if (s_cmp("max", argv[2]) == 0)
	{
		test_dbl = DBL_MAX;
		test_ldbl = LDBL_MAX;
		test_int = LONG_MAX;
		test_uint = ULONG_MAX;
	}
	else if (s_cmp("over", argv[2]) == 0)
	{
		test_dbl = DBL_MAX - 1;
		test_ldbl = LDBL_MAX - 1;
		test_int = LONG_MAX - 1;
		test_uint = ULONG_MAX - 1;
	}
	else if (s_cmp("norm", argv[2]) == 0)
	{
		test_dbl = DBL_NORM;
		test_ldbl = DBL_NORM;
		test_int = 123456789;
		test_uint = 123456789;
	}
	else
	{
		test_dbl = DBL_NORM;
		test_ldbl = DBL_NORM;
		test_int = 123456789;
		test_uint = 123456789;
	}
	if (s_cmp("neg", argv[3]) == 0)
	{
		test_dbl *= -1;
		test_ldbl *= -1;
		test_int *= -1;
	}
	if (argv[1][0] == 'd')
	{
		printf("\n\nFormat specifier: d\n\n");
		test_printf_digit(test_int);
	}
	else if (argv[1][0] == 'x')
	{
		printf("\n\nFormat specifier: x\n\n");
		test_printf_hexa(test_uint);
	}
	else if (argv[1][0] == 'o')
	{
		printf("\n\nFormat specifier: o\n\n");
		test_printf_octa(test_int);
	}
	else if (argv[1][0] == 'u')
	{
		printf("\n\nFormat specifier: u\n\n");
		test_printf_uint(test_uint);
	}
	else if (argv[1][0] == 's')
	{
		printf("\n\nFormat specifier: s\n\n");
		test_printf_string();
	}
	else if (argv[1][0] == 'c')
	{
		printf("\n\nFormat specifier: c\n\n");
		test_printf_char();
	}
	else if (argv[1][0] == 'f')
	{
		printf("\n\nFormat specifier: f\n\n");
		test_printf_float(test_dbl);
	}
	else if (argv[1][0] == 'p')
	{
		printf("\n\nFormat specifier: p\n\n");
		test_printf_pointer();
	}
	else if (argv[1][0] == 'i')
	{
		printf("\n\nFormat specifier: i\n\n");
		test_printf_int(test_int);
	}
	else if (argv[1][0] == 'Z')
	{
		printf("\n\nSizes:\n\n");
		test_printf_sizes(test_dbl, test_ldbl, test_int, test_uint);
	}
	else if (argv[1][0] == '?')
	{
		printf("\n\nUndefined Behaviours\n\n");
		test_printf_undefined();
	}
	else if (argv[1][0] == 'a')
	{
		printf("\n\nFormat specifier: d\n\n");
		test_printf_digit(test_int);
		printf("\n\nFormat specifier: i\n\n");
		test_printf_int(test_int);
		printf("\n\nFormat specifier: x\n\n");
		test_printf_hexa(test_uint);
		printf("\n\nFormat specifier: o\n\n");
		test_printf_octa(test_int);
		printf("\n\nFormat specifier: u\n\n");
		test_printf_uint(test_uint);
		printf("\n\nFormat specifier: s\n\n");
		test_printf_string();
		printf("\n\nFormat specifier: c\n\n");
		test_printf_char();
		printf("\n\nFormat specifier: f\n\n");
		test_printf_float(test_dbl);
		printf("\n\nFormat specifier: e\n\n");
		test_printf_scientific(test_dbl);
		printf("\n\nSizes:\n\n");
		test_printf_sizes(test_dbl, test_ldbl, test_int, test_uint);
	}
	return (0);
}