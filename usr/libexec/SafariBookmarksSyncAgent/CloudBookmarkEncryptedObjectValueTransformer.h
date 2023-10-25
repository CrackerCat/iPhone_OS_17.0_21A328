//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface CloudBookmarkEncryptedObjectValueTransformer
{
    NSSet *_objectClasses;	// 8 = 0x8
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x00400000000344ae
+ (Class)transformedValueClass;	// IMP=0x001000000003449d
- (void).cxx_destruct;	// IMP=0x002000000003495e
@property(readonly, nonatomic) NSSet *objectClasses; // @synthesize objectClasses=_objectClasses;
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x0010000000034681
- (id)transformedValue:(id)arg1;	// IMP=0x00100000000345a7
- (id)initWithObjectClasses:(id)arg1;	// IMP=0x0010000000034526
- (id)initWithObjectClass:(Class)arg1;	// IMP=0x00100000000344cc
- (id)init;	// IMP=0x00100000000344be
- (_Bool)attributeRequiresEncryption;	// IMP=0x00100000000344b6

@end
