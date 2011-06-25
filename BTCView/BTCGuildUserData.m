//
//  BTCGuildUserData.m
//  BTCView
//
//  Created by Fernando Chorney on 11-06-25.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import "BTCGuildUserData.h"


@implementation BTCGuildUserData

@synthesize confirmedRewards = _confirmedRewards;
@synthesize unconfirmedRewards = _unconfirmedRewards;
@synthesize estimatedRewards = _estimatedRewards;
@synthesize payouts = _payouts;

- (id) initWithConfirmedRewards:(double)__confirmedRewards
             unconfirmedRewards:(double)__unconfirmedRewards
               estimatedRewards:(double)__estimatedRewards
                         payuts:(double)__payouts {
    if ((self = [super init])) {
        [self setConfirmedRewards:__confirmedRewards];
        [self setUnconfirmedRewards:__unconfirmedRewards];
        [self setEstimatedRewards:__estimatedRewards];
        [self setPayouts:__payouts];
    }
    return self;
}

- (void) dealloc {
    [self setConfirmedRewards:0.0f];
    [self setUnconfirmedRewards:0.0f];
    [self setEstimatedRewards:0.0f];
    [self setPayouts:0.0f];
    [super dealloc];
}

@end

@implementation BTCGuildUserData (Modifiers)

- (void) setConfirmedRewards:(double)value {
    self.confirmedRewards = value;
}
- (void) setUnconfirmedRewards:(double)value {
    self.unconfirmedRewards = value;
}
- (void) setEstimatedRewards:(double)value {
    self.estimatedRewards = value;
}
- (void) setPayouts:(double)value {
    self.payouts = value;
}

@end