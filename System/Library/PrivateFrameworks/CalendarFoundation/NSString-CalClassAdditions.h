//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CalClassAdditions)
+ (id)CalAutoCommentPrefix;	// IMP=0x0050000000014a8a
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x00500000000147c4
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;	// IMP=0x0050000000014022
+ (id)ellipsisString;	// IMP=0x0050000000013e83
- (id)cal_stringWithNormalizedSpacesForUnitTesting;	// IMP=0x0010000000014d41
- (id)CalStringWithOnlyAutoComment;	// IMP=0x0010000000014c85
- (id)CalStringByRemovingAutoComment;	// IMP=0x0010000000014be5
- (_Bool)CalHasAutoCommentPrefix;	// IMP=0x0010000000014b03
- (id)stringByRemovingPrefixCaseInsensitive:(id)arg1;	// IMP=0x00100000000149f8
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000007c00
- (id)stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x00100000000149df
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;	// IMP=0x0010000000007b4d
- (id)CalSafeHFSPathComponentName;	// IMP=0x001000000001496d
- (id)appendSlashIfNeeded;	// IMP=0x00100000000047fd
- (id)removeSlashIfNeeded;	// IMP=0x001000000000eb2b
- (id)CalSafeFilename;	// IMP=0x0010000000014835
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000014632
- (id)unquote;	// IMP=0x00100000000045d5
- (id)quote;	// IMP=0x0010000000002363
- (id)trimWhiteSpace;	// IMP=0x001000000000231b
- (id)trimCommas;	// IMP=0x00100000000145e2
- (id)trimFirstComma;	// IMP=0x0010000000014579
- (id)trimFinalComma;	// IMP=0x00100000000144f1
- (id)trimChar:(unsigned short)arg1;	// IMP=0x0010000000014494
- (id)trimFirstChar:(unsigned short)arg1;	// IMP=0x0010000000014429
- (id)trimFinalChar:(unsigned short)arg1;	// IMP=0x001000000001439f
- (_Bool)CalContainsSubstring:(id)arg1;	// IMP=0x0010000000014377
- (_Bool)isPathToICalBookmark;	// IMP=0x0010000000014304
- (_Bool)isPathToBackupFile;	// IMP=0x001000000001428f
- (_Bool)isPathToICalData;	// IMP=0x001000000001421a
- (_Bool)isPathToVCalData;	// IMP=0x001000000001413d
- (_Bool)isPathToAppleScript;	// IMP=0x00100000000140c8
- (void)cal_enumerateCharactersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013f4f
- (id)stringByDecodingSlashes;	// IMP=0x001000000000ebd6
- (id)stringByEncodingSlashes;	// IMP=0x001000000000eb91
- (id)RTLString;	// IMP=0x0010000000013e5e
- (id)directionalityIsolatedString;	// IMP=0x0010000000013e39
- (_Bool)isEqualAsURL:(id)arg1;	// IMP=0x0010000000004729
- (id)CalAddressComment;	// IMP=0x00100000000138ce
- (id)CalUncommentedAddress;	// IMP=0x0010000000013591
- (id)calDataDetectedURL;	// IMP=0x0010000000013354
- (id)phoneURL;	// IMP=0x00100000000130ab
- (_Bool)cal_isPhoneNumber;	// IMP=0x0010000000012def
- (_Bool)isPhoneNumber;	// IMP=0x0010000000012ddd
- (id)radarLink;	// IMP=0x001000000001002d
- (_Bool)isMessagesURL;	// IMP=0x0010000000012dc4
- (_Bool)isAddressBookURL;	// IMP=0x00100000000097ca
- (_Bool)isMailURL;	// IMP=0x001000000000965e
- (id)stringRemovingTel;	// IMP=0x0010000000012d68
- (id)stringAddingTel;	// IMP=0x0010000000012d16
- (_Bool)hasTel;	// IMP=0x0010000000012cfd
- (id)stringRemovingMailto;	// IMP=0x00100000000046cd
- (id)stringAddingMailto;	// IMP=0x0010000000012cab
- (id)hostFromEmail;	// IMP=0x0010000000012c30
- (id)userFromEmail;	// IMP=0x0010000000012bb3
- (_Bool)resemblesEmailAddress;	// IMP=0x001000000000a33b
- (_Bool)hasMailto;	// IMP=0x001000000000468c
- (_Bool)isEqualToStringCaseInsensitive:(id)arg1;	// IMP=0x0010000000012b92
- (_Bool)containsCaseAndDiacriticInsensitive:(id)arg1;	// IMP=0x0010000000012b6a
- (_Bool)containsCaseInsensitive:(id)arg1;	// IMP=0x0010000000012b42
- (_Bool)hasSuffixCaseInsensitive:(id)arg1;	// IMP=0x0010000000012aaa
- (_Bool)hasPrefixCaseAndDiacriticInsensitive:(id)arg1;	// IMP=0x001000000000b7d2
- (_Bool)hasPrefixCaseInsensitive:(id)arg1;	// IMP=0x00100000000046a5
- (id)stringByRemovingLastPathComponent;	// IMP=0x0010000000012a53
- (id)stringByURLUnescapingAllReservedCharacters;	// IMP=0x0010000000012a41
- (id)stringByURLEscapingAllReservedCharacters;	// IMP=0x001000000001296f
- (id)stringByURLQuotingPaths;	// IMP=0x0010000000012909
- (id)stringByURLQuoting;	// IMP=0x0010000000012837
- (id)stringByURLUnquoting;	// IMP=0x0010000000004856
- (id)stringByExpandingTildeToNonSandboxHome;	// IMP=0x0010000000002950
@end
