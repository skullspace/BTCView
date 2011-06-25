//
//  BTCGuildUserData.h
//  BTCView
//
//  Created by Fernando Chorney on 11-06-25.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

@interface BTCGuildUserData : NSObject {
    double _confirmedRewards;
    double _unconfirmedRewards;
    double _estimatedRewards;
    double _payouts;
    
}

@property (nonatomic, readonly) double confirmedRewards;
@property (nonatomic, readonly) double unconfirmedRewards;
@property (nonatomic, readonly) double estimatedRewards;
@property (nonatomic, readonly) double payouts;

- (id) initWithConfirmedRewards:(double)__confirmedRewards
             unconfirmedRewards:(double)__unconfirmedRewards
               estimatedRewards:(double)__estimatedRewards
                         payuts:(double)__payouts;

@end

@interface BTCGuildUserData (Modifiers)

- (void) setConfirmedRewards:(double)value;
- (void) setUnconfirmedRewards:(double)value;
- (void) setEstimatedRewards:(double)value;
- (void) setPayouts:(double)value;

@end