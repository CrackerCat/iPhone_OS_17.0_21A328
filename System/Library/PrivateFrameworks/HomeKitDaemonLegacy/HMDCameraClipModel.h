//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBStreamingAsset, NSArray, NSData, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipModel : HMBModel
{
}

+ (id)qualityPredicate;	// IMP=0x0040000000ba509c
+ (id)countOfClipsWithQualityBetweenDatesQuery;	// IMP=0x0040000000ba5039
+ (id)clipsWithQualityBetweenDatesDescendingQuery;	// IMP=0x0040000000ba4fd6
+ (id)clipsWithQualityBetweenDatesAscendingQuery;	// IMP=0x0040000000ba4f73
+ (id)clipsBeforeDateQuery;	// IMP=0x0040000000ba4f43
+ (id)clipsWithNeedsUploadFeedbackStatusQuery;	// IMP=0x0040000000ba4f13
+ (id)incompleteClipsQuery;	// IMP=0x0040000000ba4ee3
+ (id)sentinelParentUUID;	// IMP=0x0040000000ba4eb3
+ (id)hmbQueries;	// IMP=0x0040000000ba4d5c
+ (id)hmbExternalRecordType;	// IMP=0x0040000000ba4d4f
+ (id)hmbProperties;	// IMP=0x0040000000ba4d1f
@property long long quality;
@property unsigned long long feedbackStatus;
- (id)createClipWithSignificantEvents:(id)arg1;	// IMP=0x0000000000ba6155

// Remaining properties
@property(retain, nonatomic) NSNumber *duration; // @dynamic duration;
@property(retain, nonatomic) NSData *encryptionKey; // @dynamic encryptionKey;
@property(retain, nonatomic) NSNumber *encryptionScheme; // @dynamic encryptionScheme;
@property(retain, nonatomic) NSNumber *feedbackStatusField; // @dynamic feedbackStatusField;
@property(retain, nonatomic) NSNumber *isComplete; // @dynamic isComplete;
@property(retain, nonatomic) NSNumber *maximumClipDuration; // @dynamic maximumClipDuration;
@property(retain, nonatomic) NSNumber *qualityField; // @dynamic qualityField;
@property(retain, nonatomic) NSNumber *recordedLocally; // @dynamic recordedLocally;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *streamingAssetVersion; // @dynamic streamingAssetVersion;
@property(retain, nonatomic) NSNumber *targetFragmentDuration; // @dynamic targetFragmentDuration;
@property(retain, nonatomic) NSArray *videoMetadata; // @dynamic videoMetadata;
@property(retain, nonatomic) NSArray *videoMetadataArray; // @dynamic videoMetadataArray;
@property(retain, nonatomic) HMBStreamingAsset *videoStreamingAsset; // @dynamic videoStreamingAsset;

@end
