//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SharingXPCHelperPerspectiveDataItem : NSObject
{
    NSData *_perspectiveData;	// 8 = 0x8
    NSData *_CGImageData;	// 16 = 0x10
    struct CGSize _perspectiveDataSize;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001ce9a8
- (void).cxx_destruct;	// IMP=0x00200000001cece8
@property(readonly, retain, nonatomic) NSData *CGImageData; // @synthesize CGImageData=_CGImageData;
@property(readonly, nonatomic) struct CGSize perspectiveDataSize; // @synthesize perspectiveDataSize=_perspectiveDataSize;
@property(readonly, retain, nonatomic) NSData *perspectiveData; // @synthesize perspectiveData=_perspectiveData;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001ceba1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001ceadb
- (id)description;	// IMP=0x00100000001cead3
- (id)initWithPerspectiveData:(id)arg1 perspectiveDataSize:(struct CGSize)arg2 CGImageData:(id)arg3;	// IMP=0x00100000001cea1a
- (id)init;	// IMP=0x00100000001ce9b0

@end
