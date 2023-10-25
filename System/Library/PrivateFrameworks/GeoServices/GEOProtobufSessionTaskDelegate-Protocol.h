//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEODataRequest, GEOProtobufSession, GEOProtobufSessionTask, NSError, PBCodable;

@protocol GEOProtobufSessionTaskDelegate <NSObject>
- (void)protobufSession:(GEOProtobufSession *)arg1 didCompleteTask:(GEOProtobufSessionTask *)arg2;

@optional
- (NSError *)protobufSession:(GEOProtobufSession *)arg1 validateResponse:(PBCodable *)arg2;
- (void)protobufSession:(GEOProtobufSession *)arg1 willSendRequest:(GEODataRequest *)arg2 forTask:(GEOProtobufSessionTask *)arg3 completionHandler:(void (^)(GEODataRequest *))arg4;
@end
