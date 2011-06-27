//
//  BTCGuildWorker.m
//  BTCView
//
//  Created by Fernando Chorney on 11-06-25.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import "BTCGuildWorker.h"

@implementation BTCGuildWorker

@synthesize name = _name;
@synthesize hashRate = _hashRate;
@synthesize roundShares = _roundShares;
@synthesize roundStales = _roundStales;
@synthesize resetShares = _resetShares;
@synthesize resetStales = _resetStales;
@synthesize totalShares = _totalShares;
@synthesize totalStales = _totalStales;
@synthesize lastShare = _lastShare;
@synthesize blocksFound = _blocksFound;

- (id)initWithName:(NSString *)__name
          hashRate:(double)__hashRate
       roundShares:(NSInteger)__roundShares
       roundStales:(NSInteger)__roundStales
       resetShares:(NSInteger)__resetShares
       resetStales:(NSInteger)__resetStales
       totalShares:(NSInteger)__totalShares
       totalStales:(NSInteger)__totalStales
         lastShare:(NSTimeInterval)__lastShare 
       blocksFound:(NSInteger)__blocksFound {
    if ((self = [super init])) {
        [self setName:__name];
        [self setHashRate:__hashRate];
        [self setRoundShares:__roundShares];
        [self setRoundStales:__roundStales];
        [self setResetShares:__resetShares];
        [self setResetStales:__resetStales];
        [self setTotalShares:__totalShares];
        [self setTotalStales:__totalStales];
        [self setLastShare:__lastShare];
        [self setBlocksFound:__blocksFound];
    }
    return self;
}

- (void)dealloc {
    [_name release];
    _hashRate = 0.0f;
    _roundShares = 0;
    _roundStales = 0;
    _resetShares = 0;
    _resetStales = 0;
    _totalShares = 0;
    _totalStales = 0;
    _lastShare = 0.0f;
    _blocksFound = 0;
    [super dealloc];
}

@end