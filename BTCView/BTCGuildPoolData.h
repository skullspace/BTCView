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

@property (nonatomic, assign) double hashRate;
@property (nonatomic, assign) NSInteger activeWorkers;
@property (nonatomic, assign) NSInteger roundShares;
@property (nonatomic, assign) NSTimeInterval roundTime;
@property (nonatomic, retain) NSDictionary *serverSpeeds;

- (id) initWithHashRate:(double)__hashRate
          activeWorkers:(NSInteger)__activeWorkers
            roundShares:(NSInteger)__roundShares
              roundTime:(NSTimeInterval)__roundTime
           serverSpeeds:(NSDictionary *)__serverSpeeds;

@end