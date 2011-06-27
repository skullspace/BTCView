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

@property (nonatomic, assign) double confirmedRewards;
@property (nonatomic, assign) double unconfirmedRewards;
@property (nonatomic, assign) double estimatedRewards;
@property (nonatomic, assign) double payouts;

- (id) initWithConfirmedRewards:(double)__confirmedRewards
             unconfirmedRewards:(double)__unconfirmedRewards
               estimatedRewards:(double)__estimatedRewards
                         payuts:(double)__payouts;

@end