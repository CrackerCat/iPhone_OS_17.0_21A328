//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray;

@interface CSEnhancedEndpointerInputVector : NSObject
{
    MLMultiArray *_mlInputVector;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000138637
@property(retain, nonatomic) MLMultiArray *mlInputVector; // @synthesize mlInputVector=_mlInputVector;
- (void)populateVector:(id)arg1;	// IMP=0x0010000000138616
- (id)initWithShape:(id)arg1;	// IMP=0x0010000000138608

@end
