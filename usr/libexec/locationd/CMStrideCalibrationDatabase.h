//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CMStrideCalibrationDatabaseDelegate;

@interface CMStrideCalibrationDatabase : NSObject
{
    struct unique_ptr<CMStrideCalRecorderDb, std::default_delete<CMStrideCalRecorderDb>> fStrideCalDb;	// 8 = 0x8
    id <CMStrideCalibrationDatabaseDelegate> _delegate;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0020000000857961
- (void).cxx_destruct;	// IMP=0x0010000000857940
@property(nonatomic) id <CMStrideCalibrationDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void);	// IMP=0x0010000000857866
- (_Bool)queryStrideLengthTracks:(void *)arg1;	// IMP=0x0010000000857855
- (id)copyHistory;	// IMP=0x00100000008576da
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x0010000000857315
- (_Bool)isCalibrationConvergedStdForBinWithSpeed:(double)arg1;	// IMP=0x0010000000856fe6
- (void)addEntry:(struct CLStrideCalEntry)arg1;	// IMP=0x0010000000856a19
- (id)initWithSilo:(id)arg1;	// IMP=0x00100000008564e0

@end
