//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@class NSString;

@interface NSLocale (LTLocaleIdentifier)
+ (id)lt_localeWithLTIdentifier:(id)arg1;	// IMP=0x00200000000299d1
@property(readonly, nonatomic) NSString *lt_nlLanguageCode;
- (_Bool)_ltEqual:(id)arg1;	// IMP=0x0010000000029b5e
- (id)_vsLocaleIdentifier;	// IMP=0x0010000000029b00
- (id)_ltCsLocaleIdentifier;	// IMP=0x0010000000029aa2
- (id)_ltLocaleIdentifier;	// IMP=0x0010000000029a44
@end
