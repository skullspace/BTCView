//
//  BTCGuildPoolData.h
//  BTCView
//
//  Created by Fernando Chorney on 11-06-25.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

@interface BTCGuildPoolData : NSObject {
    double _hashRate;
    NSInteger _activeWorkers;
    NSInteger _roundShares;
    NSTimeInterval _roundTime;
    NSDictionary *_serverSpeeds; // Will be stored as Key = Server Name, Value = Server Speed (Double)
}

@property (nonatomic, readonly) double hashRate;
@property (nonatomic, readonly) NSInteger activeWorkers;
@property (nonatomic, readonly) NSInteger roundShares;
@property (nonatomic, readonly) NSTimeInterval roundTime;
@property (nonatomic, retain, readonly) NSDictionary *serverSpeeds;

- (id) initWithHashRate:(double)__hashRate
          activeWorkers:(NSInteger)__activeWorkers
            roundShares:(NSInteger)__roundShares
              roundTime:(NSTimeInterval)__roundTime
           serverSpeeds:(NSDictionary *)__serverSpeeds;

@end

@interface BTCGuildPoolData (Modifiers)

- (void)setHashRate:(double)value;
- (void)setActiveWorkers:(NSInteger)value;
- (void)setRoundShares:(NSInteger)value;
- (void)setRoundTime:(NSTimeInterval)value;
- (void)setServerSpeeds:(NSDictionary *)value;

@end