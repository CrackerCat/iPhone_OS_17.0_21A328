//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class LKUser;

@interface LUIFetchUserImageOperation : CATOperation
{
    LKUser *_user;	// 8 = 0x8
    unsigned long long _imageSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000045d28
@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) LKUser *user; // @synthesize user=_user;
- (void)fetchImage;	// IMP=0x00100000000458af
- (void)main;	// IMP=0x001000000004589d
- (_Bool)isAsynchronous;	// IMP=0x0010000000045895
- (id)initWithUser:(id)arg1 imageSize:(unsigned long long)arg2;	// IMP=0x0010000000045815

@end
