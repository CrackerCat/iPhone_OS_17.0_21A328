//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSObject;

@interface ASCDescriber : NSObject
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

+ (id)nilObject;	// IMP=0x002000000000a96b
- (void).cxx_destruct;	// IMP=0x002000000000b5bc
@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <NSObject> object; // @synthesize object=_object;
- (id)description;	// IMP=0x001000000000b494
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000b2f1
- (unsigned long long)hash;	// IMP=0x001000000000b23f
- (id)finalizeDescription;	// IMP=0x001000000000b180
- (id)describeProperties;	// IMP=0x001000000000aef2
- (id)describeObject;	// IMP=0x001000000000ae32
- (void)addObject:(id)arg1 withName:(id)arg2;	// IMP=0x001000000000ad44
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;	// IMP=0x001000000000ace0
- (void)addDouble:(double)arg1 withName:(id)arg2;	// IMP=0x001000000000ac5b
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x001000000000abdc
- (void)addInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x001000000000ab5d
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x001000000000aade
- (void)addInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x001000000000aa5f
- (void)addBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x001000000000a9fd
- (id)initWithObject:(id)arg1;	// IMP=0x001000000000a978

@end
