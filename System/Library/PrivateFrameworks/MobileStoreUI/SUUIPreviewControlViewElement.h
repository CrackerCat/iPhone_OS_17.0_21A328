//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SUUIPreviewControlViewElement : SUUIViewElement
{
    BOOL _enabled;	// 8 = 0x8
    long long _itemIdentifier;	// 16 = 0x10
    NSString *_mediaURLString;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000329831
@property(readonly, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (_Bool)isEnabled;	// IMP=0x00000000003297cb
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000003296f3
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000329591

@end
