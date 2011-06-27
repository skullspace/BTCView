//
//  BTCGuildPoolData.m
//  BTCView
//
//  Created by Fernando Chorney on 11-06-25.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import "BTCGuildPoolData.h"

@implementation BTCGuildPoolData

@synthesize hashRate = _hashRate;
@synthesize activeWorkers = _activeWorkers;
@synthesize roundShares = _roundShares;
@synthesize roundTime = _roundTime;
@synthesize serverSpeeds = _serverSpeeds;

- (id) initWithHashRate:(double)__hashRate
          activeWorkers:(NSInteger)__activeWorkers
            roundShares:(NSInteger)__roundShares
              roundTime:(NSTimeInterval)__roundTime
           serverSpeeds:(NSDictionary *)__serverSpeeds {
    if ((self = [super init])) {
        [self setHashRate:__hashRate];
        [self setActiveWorkers:__activeWorkers];
        [self setRoundShares:__roundShares];
        [self setRoundTime:__roundTime];
        [self setServerSpeeds:__serverSpeeds];
    }
    return self;
}

@end