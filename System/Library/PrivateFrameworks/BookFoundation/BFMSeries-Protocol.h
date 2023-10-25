//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookFoundation/BFMResource-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@protocol BFMSeries <BFMResource>
@property(readonly, nonatomic) NSArray *genres;
@property(readonly, nonatomic) NSArray *assets;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isOrdered;
@property(readonly, nonatomic) _Bool isExplicit;
@property(readonly, nonatomic) _Bool hasUniqueAuthors;
@property(readonly, nonatomic) NSNumber *authorCount;
@property(readonly, nonatomic) NSArray *authorNames;
@property(readonly, nonatomic) _Bool isBookSeries;
@property(readonly, nonatomic) _Bool isAudiobookSeries;
@end
