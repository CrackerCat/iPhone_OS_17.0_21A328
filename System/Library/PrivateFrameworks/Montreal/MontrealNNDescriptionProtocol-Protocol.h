//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Montreal/NSObject-Protocol.h>

@class MontrealLogIndent, NSDictionary, NSMutableString, NSString;

@protocol MontrealNNDescriptionProtocol <NSObject>
- (NSDictionary *)jsonDescription;
- (void)description:(NSMutableString *)arg1 indent:(MontrealLogIndent *)arg2;

@optional
- (void)generateJSONAtPath:(NSString *)arg1;
- (id)checkForValidity;
@end
