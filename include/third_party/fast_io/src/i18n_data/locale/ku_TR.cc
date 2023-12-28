﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("ku_TR"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Kurdish (latin) locale for Turkey"),.source=tsc("Kader DILSIZ\t\t;\t\tfast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("Kader DILSIZ, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc("kader@ikader.com, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Kurdish"),.territory=tsc("Turkey"),.revision=tsc("0.1"),.date=tsc("2003-07-27")},.monetary={.int_curr_symbol=tsc("TRY "),.currency_symbol=tsc("₺"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("yêk"),tsc("dus"),tsc("sês"),tsc("çar"),tsc("pên"),tsc("înî"),tsc("sep")},.day={tsc("yêksêm"),tsc("dusêm"),tsc("sêsêm"),tsc("çarsêm"),tsc("pêncsêm"),tsc("înî"),tsc("sept")},.abmon={tsc("Çil"),tsc("Sib"),tsc("Ada"),tsc("Nîs"),tsc("Gul"),tsc("Hez"),tsc("Tîr"),tsc("Teb"),tsc("Îlo"),tsc("Cot"),tsc("Mij"),tsc("Kan")},.mon={tsc("Çile"),tsc("Sibat"),tsc("Adar"),tsc("Nîsan"),tsc("Gulan"),tsc("Hezîran"),tsc("Tîrmeh"),tsc("Tebax"),tsc("Îlon"),tsc("Cotmeh"),tsc("Mijdar"),tsc("Kanûn")},.d_t_fmt=tsc("%A %d %B %Y %T %Z"),.d_fmt=tsc("%d//%m//%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%A %d %B %Y"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1eEdDyY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("erê"),.nostr=tsc("nâ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("90")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_gen=tsc("Sayın"),.name_miss=tsc("Kçk"),.name_mr=tsc("M."),.name_mrs=tsc("Jne"),.name_ms=tsc("Jne")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Tirkiye"),.country_post=tsc("TR"),.country_ab2=tsc("TR"),.country_ab3=tsc("TUR"),.country_num=792,.country_car=tsc("TR"),.country_isbn=tsc("975"),.lang_name=tsc("kurdî"),.lang_ab=tsc("ku"),.lang_term=tsc("kur"),.lang_lib=tsc("kur")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"ku_TR"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Kurdish (latin) locale for Turkey"),.source=tsc(L"Kader DILSIZ\t\t;\t\tfast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"Kader DILSIZ, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(L"kader@ikader.com, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Kurdish"),.territory=tsc(L"Turkey"),.revision=tsc(L"0.1"),.date=tsc(L"2003-07-27")},.monetary={.int_curr_symbol=tsc(L"TRY "),.currency_symbol=tsc(L"₺"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"yêk"),tsc(L"dus"),tsc(L"sês"),tsc(L"çar"),tsc(L"pên"),tsc(L"înî"),tsc(L"sep")},.day={tsc(L"yêksêm"),tsc(L"dusêm"),tsc(L"sêsêm"),tsc(L"çarsêm"),tsc(L"pêncsêm"),tsc(L"înî"),tsc(L"sept")},.abmon={tsc(L"Çil"),tsc(L"Sib"),tsc(L"Ada"),tsc(L"Nîs"),tsc(L"Gul"),tsc(L"Hez"),tsc(L"Tîr"),tsc(L"Teb"),tsc(L"Îlo"),tsc(L"Cot"),tsc(L"Mij"),tsc(L"Kan")},.mon={tsc(L"Çile"),tsc(L"Sibat"),tsc(L"Adar"),tsc(L"Nîsan"),tsc(L"Gulan"),tsc(L"Hezîran"),tsc(L"Tîrmeh"),tsc(L"Tebax"),tsc(L"Îlon"),tsc(L"Cotmeh"),tsc(L"Mijdar"),tsc(L"Kanûn")},.d_t_fmt=tsc(L"%A %d %B %Y %T %Z"),.d_fmt=tsc(L"%d//%m//%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%A %d %B %Y"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1eEdDyY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"erê"),.nostr=tsc(L"nâ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"90")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_gen=tsc(L"Sayın"),.name_miss=tsc(L"Kçk"),.name_mr=tsc(L"M."),.name_mrs=tsc(L"Jne"),.name_ms=tsc(L"Jne")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Tirkiye"),.country_post=tsc(L"TR"),.country_ab2=tsc(L"TR"),.country_ab3=tsc(L"TUR"),.country_num=792,.country_car=tsc(L"TR"),.country_isbn=tsc(L"975"),.lang_name=tsc(L"kurdî"),.lang_ab=tsc(L"ku"),.lang_term=tsc(L"kur"),.lang_lib=tsc(L"kur")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"ku_TR"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Kurdish (latin) locale for Turkey"),.source=tsc(u8"Kader DILSIZ\t\t;\t\tfast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"Kader DILSIZ, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u8"kader@ikader.com, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Kurdish"),.territory=tsc(u8"Turkey"),.revision=tsc(u8"0.1"),.date=tsc(u8"2003-07-27")},.monetary={.int_curr_symbol=tsc(u8"TRY "),.currency_symbol=tsc(u8"₺"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"yêk"),tsc(u8"dus"),tsc(u8"sês"),tsc(u8"çar"),tsc(u8"pên"),tsc(u8"înî"),tsc(u8"sep")},.day={tsc(u8"yêksêm"),tsc(u8"dusêm"),tsc(u8"sêsêm"),tsc(u8"çarsêm"),tsc(u8"pêncsêm"),tsc(u8"înî"),tsc(u8"sept")},.abmon={tsc(u8"Çil"),tsc(u8"Sib"),tsc(u8"Ada"),tsc(u8"Nîs"),tsc(u8"Gul"),tsc(u8"Hez"),tsc(u8"Tîr"),tsc(u8"Teb"),tsc(u8"Îlo"),tsc(u8"Cot"),tsc(u8"Mij"),tsc(u8"Kan")},.mon={tsc(u8"Çile"),tsc(u8"Sibat"),tsc(u8"Adar"),tsc(u8"Nîsan"),tsc(u8"Gulan"),tsc(u8"Hezîran"),tsc(u8"Tîrmeh"),tsc(u8"Tebax"),tsc(u8"Îlon"),tsc(u8"Cotmeh"),tsc(u8"Mijdar"),tsc(u8"Kanûn")},.d_t_fmt=tsc(u8"%A %d %B %Y %T %Z"),.d_fmt=tsc(u8"%d//%m//%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%A %d %B %Y"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1eEdDyY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"erê"),.nostr=tsc(u8"nâ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"90")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_gen=tsc(u8"Sayın"),.name_miss=tsc(u8"Kçk"),.name_mr=tsc(u8"M."),.name_mrs=tsc(u8"Jne"),.name_ms=tsc(u8"Jne")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Tirkiye"),.country_post=tsc(u8"TR"),.country_ab2=tsc(u8"TR"),.country_ab3=tsc(u8"TUR"),.country_num=792,.country_car=tsc(u8"TR"),.country_isbn=tsc(u8"975"),.lang_name=tsc(u8"kurdî"),.lang_ab=tsc(u8"ku"),.lang_term=tsc(u8"kur"),.lang_lib=tsc(u8"kur")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"ku_TR"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Kurdish (latin) locale for Turkey"),.source=tsc(u"Kader DILSIZ\t\t;\t\tfast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"Kader DILSIZ, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u"kader@ikader.com, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Kurdish"),.territory=tsc(u"Turkey"),.revision=tsc(u"0.1"),.date=tsc(u"2003-07-27")},.monetary={.int_curr_symbol=tsc(u"TRY "),.currency_symbol=tsc(u"₺"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"yêk"),tsc(u"dus"),tsc(u"sês"),tsc(u"çar"),tsc(u"pên"),tsc(u"înî"),tsc(u"sep")},.day={tsc(u"yêksêm"),tsc(u"dusêm"),tsc(u"sêsêm"),tsc(u"çarsêm"),tsc(u"pêncsêm"),tsc(u"înî"),tsc(u"sept")},.abmon={tsc(u"Çil"),tsc(u"Sib"),tsc(u"Ada"),tsc(u"Nîs"),tsc(u"Gul"),tsc(u"Hez"),tsc(u"Tîr"),tsc(u"Teb"),tsc(u"Îlo"),tsc(u"Cot"),tsc(u"Mij"),tsc(u"Kan")},.mon={tsc(u"Çile"),tsc(u"Sibat"),tsc(u"Adar"),tsc(u"Nîsan"),tsc(u"Gulan"),tsc(u"Hezîran"),tsc(u"Tîrmeh"),tsc(u"Tebax"),tsc(u"Îlon"),tsc(u"Cotmeh"),tsc(u"Mijdar"),tsc(u"Kanûn")},.d_t_fmt=tsc(u"%A %d %B %Y %T %Z"),.d_fmt=tsc(u"%d//%m//%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%A %d %B %Y"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1eEdDyY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"erê"),.nostr=tsc(u"nâ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"90")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_gen=tsc(u"Sayın"),.name_miss=tsc(u"Kçk"),.name_mr=tsc(u"M."),.name_mrs=tsc(u"Jne"),.name_ms=tsc(u"Jne")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Tirkiye"),.country_post=tsc(u"TR"),.country_ab2=tsc(u"TR"),.country_ab3=tsc(u"TUR"),.country_num=792,.country_car=tsc(u"TR"),.country_isbn=tsc(u"975"),.lang_name=tsc(u"kurdî"),.lang_ab=tsc(u"ku"),.lang_term=tsc(u"kur"),.lang_lib=tsc(u"kur")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"ku_TR"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Kurdish (latin) locale for Turkey"),.source=tsc(U"Kader DILSIZ\t\t;\t\tfast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"Kader DILSIZ, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(U"kader@ikader.com, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Kurdish"),.territory=tsc(U"Turkey"),.revision=tsc(U"0.1"),.date=tsc(U"2003-07-27")},.monetary={.int_curr_symbol=tsc(U"TRY "),.currency_symbol=tsc(U"₺"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"yêk"),tsc(U"dus"),tsc(U"sês"),tsc(U"çar"),tsc(U"pên"),tsc(U"înî"),tsc(U"sep")},.day={tsc(U"yêksêm"),tsc(U"dusêm"),tsc(U"sêsêm"),tsc(U"çarsêm"),tsc(U"pêncsêm"),tsc(U"înî"),tsc(U"sept")},.abmon={tsc(U"Çil"),tsc(U"Sib"),tsc(U"Ada"),tsc(U"Nîs"),tsc(U"Gul"),tsc(U"Hez"),tsc(U"Tîr"),tsc(U"Teb"),tsc(U"Îlo"),tsc(U"Cot"),tsc(U"Mij"),tsc(U"Kan")},.mon={tsc(U"Çile"),tsc(U"Sibat"),tsc(U"Adar"),tsc(U"Nîsan"),tsc(U"Gulan"),tsc(U"Hezîran"),tsc(U"Tîrmeh"),tsc(U"Tebax"),tsc(U"Îlon"),tsc(U"Cotmeh"),tsc(U"Mijdar"),tsc(U"Kanûn")},.d_t_fmt=tsc(U"%A %d %B %Y %T %Z"),.d_fmt=tsc(U"%d//%m//%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%A %d %B %Y"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1eEdDyY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"erê"),.nostr=tsc(U"nâ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"90")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_gen=tsc(U"Sayın"),.name_miss=tsc(U"Kçk"),.name_mr=tsc(U"M."),.name_mrs=tsc(U"Jne"),.name_ms=tsc(U"Jne")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Tirkiye"),.country_post=tsc(U"TR"),.country_ab2=tsc(U"TR"),.country_ab3=tsc(U"TUR"),.country_num=792,.country_car=tsc(U"TR"),.country_isbn=tsc(U"975"),.lang_name=tsc(U"kurdî"),.lang_ab=tsc(U"ku"),.lang_term=tsc(U"kur"),.lang_lib=tsc(U"kur")},.measurement={.measurement=1}};


}
}

#include"../main.h"