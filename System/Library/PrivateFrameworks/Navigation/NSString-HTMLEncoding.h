//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HTMLEncoding)
+ (id)_navigation_stringForPower:(double)arg1 unit:(id)arg2;	// IMP=0x008000000001fc40
+ (long long)_navigation_abbreviatedFromatterUnitsStyleForLocale:(id)arg1;	// IMP=0x008000000001fbe9
+ (id)_navigation_selectInstructionWithServerStringArray:(id)arg1 isSpoken:(_Bool)arg2 clientBlock:(CDUnknownBlockType)arg3;	// IMP=0x008000000001f9bd
+ (id)_navigation_selectInstructionWithServerString:(id)arg1 isSpoken:(_Bool)arg2 clientBlock:(CDUnknownBlockType)arg3;	// IMP=0x008000000001f91c
+ (_Bool)_navigation_logIfContainsVariables:(id)arg1;	// IMP=0x008000000001f767
+ (void)_navigation_logMismatchBetweenServerInstruction:(id)arg1 clientInstruction:(id)arg2;	// IMP=0x008000000001f61a
+ (id)_navigation_languageDirectionStringWithFormat:(id)arg1;	// IMP=0x008000000001f2c7
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2 showsCurrencySymbol:(_Bool)arg3;	// IMP=0x008000000001eba9
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2;	// IMP=0x008000000001eb91
+ (id)_navigation_formattedStringForPriceValue:(double)arg1 currencyCode:(id)arg2;	// IMP=0x008000000001eafa
+ (id)_navigation_commaListDelimiter;	// IMP=0x008000000001eae9
+ (id)_navigation_stringWithCountdownValue:(id)arg1 inToken:(id)arg2 options:(CDStruct_ef0b40be)arg3;	// IMP=0x008000000001e231
+ (id)_navigation_stringWithTimeStampValues:(id)arg1 options:(CDStruct_ef0b40be)arg2;	// IMP=0x008000000001d7d1
+ (id)_navigation_spokenStringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000001d50e
+ (id)_navigation_spokenStringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000001d4c2
+ (id)_navigation_spokenStringWithSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000001d4ae
+ (id)_navigation_stringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000001d304
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000001d2b8
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000001d2a4
+ (id)_navigation_stringForDistance:(double)arg1 formatter:(id)arg2 locale:(id)arg3 shouldScale:(_Bool)arg4;	// IMP=0x008000000001c970
+ (id)_navigation_formatterForOptions:(id)arg1;	// IMP=0x008000000001c7aa
+ (id)_navigation_localizedStringForDistance:(double)arg1 detail:(long long)arg2 unitFormat:(long long)arg3 locale:(id)arg4 useMetric:(unsigned long long)arg5 useYards:(unsigned long long)arg6 shouldScale:(_Bool)arg7;	// IMP=0x008000000001c4f4
+ (id)_navigation_localizedStringForDistance:(double)arg1 detail:(long long)arg2 unitFormat:(long long)arg3 locale:(id)arg4 useMetric:(unsigned long long)arg5 useYards:(unsigned long long)arg6;	// IMP=0x008000000001c4d8
+ (id)_navigation_localizedStringForDistance:(double)arg1 context:(long long)arg2 extraDetail:(_Bool)arg3;	// IMP=0x008000000001c368
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 wrappedOverrideVariables:(id)arg5 allTokensExpanded:(_Bool *)arg6;	// IMP=0x008000000001c318
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 wrappedOverrideVariables:(id)arg5;	// IMP=0x008000000001c2f5
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 wrappedOverrideVariables:(id)arg3 allTokensExpanded:(_Bool *)arg4;	// IMP=0x008000000001b10b
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 wrappedOverrideVariables:(id)arg3;	// IMP=0x008000000001b0ef
+ (_Bool)_replaceToken:(id)arg1 composedString:(id)arg2 options:(CDStruct_ef0b40be)arg3 overrideVariables:(id)arg4;	// IMP=0x008000000001afeb
+ (_Bool)_replaceToken:(id)arg1 composedString:(id)arg2 replacement:(id)arg3;	// IMP=0x008000000001ae13
+ (id)_navigation_replacementForFormatToken:(id)arg1 abbreviatedUnits:(_Bool)arg2 overrideVariables:(id)arg3 detail:(long long)arg4 spoken:(_Bool)arg5;	// IMP=0x008000000001adcc
+ (id)_navigation_overridenTokenForToken:(id)arg1 overrideVariables:(id)arg2;	// IMP=0x008000000001aa3e
+ (id)_navigation_replacementForFormatToken:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3 useMetric:(unsigned long long)arg4;	// IMP=0x0080000000019e8f
+ (id)_navigation_replacementForFormatToken:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3;	// IMP=0x0080000000019e7a
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5 allTokensExpanded:(_Bool *)arg6;	// IMP=0x0080000000019d73
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5;	// IMP=0x0080000000019c70
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3 allTokensExpanded:(_Bool *)arg4;	// IMP=0x0080000000019b68
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3;	// IMP=0x0080000000019a65
+ (id)_navigation_stringForServerFormattedString:(id)arg1;	// IMP=0x0080000000019a30
+ (id)_navigation_frequencyRangeLocalizedInMixedUnitsWithMinString:(id)arg1 maxString:(id)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x0080000000019974
+ (id)_navigation_frequencyRangeLocalizedInHoursWithMinHours:(long long)arg1 maxHours:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x00800000000197ff
+ (id)_navigation_frequencyRangeLocalizedInMinutesWithMinMinutes:(long long)arg1 maxMinutes:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x008000000001968a
+ (id)_navigation_descriptionForFrequencyRangeWithMinFrequency:(long long)arg1 maxFrequency:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x008000000001944d
+ (id)_navigation_descriptionForFrequencyMinuteValue:(long long)arg1;	// IMP=0x00800000000193e9
+ (id)_frequencyDateComponents:(long long)arg1;	// IMP=0x008000000001935c
+ (id)_navigation_formattedDescriptionForLiveStatus:(long long)arg1 updatedDepartureTimeString:(id)arg2;	// IMP=0x0080000000019258
+ (id)_navigation_formattedDescriptionForFrequency:(id)arg1;	// IMP=0x0080000000018f4a
+ (id)_frequencyStringForComponents:(id)arg1 forRange:(_Bool)arg2 forceShort:(_Bool)arg3;	// IMP=0x0080000000018ac3
+ (_Bool)_componentsWillUseShortFormat:(id)arg1;	// IMP=0x0080000000018a6e
+ (id)_navigation_stringForExpectedTravelTime:(double)arg1 dateUnitStyle:(long long)arg2;	// IMP=0x00800000000188f2
+ (id)_navigation_formattedStringForHourRanges:(id)arg1 timeZone:(id)arg2 delimeter:(id)arg3;	// IMP=0x0080000000017ee5
+ (id)_navigation_formattedStringForHourRanges:(id)arg1 timeZone:(id)arg2;	// IMP=0x0080000000017e4e
+ (id)_navigation_formattedStringForOperatingHours:(id)arg1 timeZone:(id)arg2;	// IMP=0x0080000000017b6b
+ (id)_navigation_formatFloatForPrintedDistance:(double)arg1;	// IMP=0x0080000000017a66
+ (id)_navigation_formattedStringForFloat:(double)arg1 useIncreasedPrecision:(_Bool)arg2;	// IMP=0x0080000000017918
+ (id)_navigation_formattedStringForFloat:(double)arg1;	// IMP=0x0080000000017904
+ (id)_navigation_formattedStringForInteger:(long long)arg1;	// IMP=0x00800000000177d0
+ (id)_navigation_pointerDescription:(id)arg1;	// IMP=0x00800000000202c2
+ (id)_navigation_stringWithTime:(id)arg1;	// IMP=0x00800000000202a1
+ (id)_navigation_stringWithAltitudeUnits;	// IMP=0x0080000000020294
+ (id)_navigation_stringWithAltitude:(double)arg1 accuracy:(double)arg2;	// IMP=0x00800000000201d3
+ (id)_navigation_stringWithDirection:(double)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000001fd8a
+ (id)_navigation_stringWithSpeedUnits;	// IMP=0x008000000001fd7d
+ (id)_navigation_stringWithSpeed:(double)arg1;	// IMP=0x008000000001fd1b
- (id)_navigation_sanitizedStringForDisplayInHTML;	// IMP=0x001000000001770e
- (id)_navigation_stringByReplacingNewLinesWithString:(id)arg1;	// IMP=0x0010000000017663
- (id)_navigation_stringByEscapingHTML;	// IMP=0x0010000000017543
- (unsigned long long)_navigation_distanceLevenshtein:(id)arg1;	// IMP=0x001000000001f9f4
- (_Bool)_navigation_containsVariables;	// IMP=0x001000000001f6ea
- (id)_navigation_stripVariablesFromString;	// IMP=0x001000000001f588
- (_Bool)_navigation_isPrivate;	// IMP=0x001000000001f56f
- (id)_navigation_stringByStrippingPrivateTag;	// IMP=0x001000000001f516
- (id)_navigation_stringByMarkingAsPrivateText;	// IMP=0x001000000001f4ea
- (id)_navigation_stripTagsFromSpokenString;	// IMP=0x001000000001f430
- (_Bool)_navigation_isCJK;	// IMP=0x001000000001f13a
- (id)_navigation_stringByMarkingAsNormalText;	// IMP=0x001000000001f0d2
- (id)_navigation_stringByMarkingAsNavigationText;	// IMP=0x001000000001eecf
- (id)_navigation_stringByMarkingAsAddress;	// IMP=0x001000000001ee67
- (id)_navigation_stringByMakingPhonetic;	// IMP=0x001000000001edff
- (id)mnlpr_componentsSeparatedByGlyph;	// IMP=0x0010000000043e7e
@end
