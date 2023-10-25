//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSBusinessLinkContent : PBCodable
{
    NSString *_language;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    _Bool _isDefault;	// 32 = 0x20
    CDStruct_d3bb80d3 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000064bbb
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000064a99
- (unsigned long long)hash;	// IMP=0x00000000000649ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000648e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000647fd
- (void)copyTo:(id)arg1;	// IMP=0x000000000006475a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000646b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000646ac
- (id)dictionaryRepresentation;	// IMP=0x0000000000064367
- (id)description;	// IMP=0x00000000000642b8
@property(nonatomic) _Bool hasIsDefault;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasLanguage;

@end
