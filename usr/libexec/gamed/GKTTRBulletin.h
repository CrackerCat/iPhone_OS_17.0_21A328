//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKTTRBulletin
{
    long long _ttrBulletinType;	// 16 = 0x10
    NSString *_ttrURLString;	// 24 = 0x18
}

+ (id)packFakeTTRBulletinWithInfo:(id)arg1;	// IMP=0x004000000011487a
- (void).cxx_destruct;	// IMP=0x0020000000115623
@property(retain, nonatomic) NSString *ttrURLString; // @synthesize ttrURLString=_ttrURLString;
@property(nonatomic) long long ttrBulletinType; // @synthesize ttrBulletinType=_ttrBulletinType;
- (void)handleAction:(id)arg1;	// IMP=0x0010000000115085
- (void)assembleBulletin;	// IMP=0x0010000000114d5b
- (id)initWithPushNotification:(id)arg1;	// IMP=0x0010000000114a9b

@end
