//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol SimDeviceIOInterface
- (BOOL)unregisterService:(NSString *)arg1 error:(id *)arg2;
- (BOOL)registerPort:(unsigned int)arg1 service:(NSString *)arg2 error:(id *)arg3;
- (NSDictionary *)makeRequest:(NSString *)arg1 fields:(NSDictionary *)arg2;
@end
