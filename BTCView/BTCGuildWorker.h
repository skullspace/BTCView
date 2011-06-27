//
//  BTCGuildWorker.h
//  BTCView
//
//  Created by Fernando Chorney on 11-06-25.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BTCGuildWorker : NSObject {
    NSString *_name;
    double _hashRate;
    NSInteger _roundShares;
    NSInteger _roundStales;
    NSInteger _resetShares;
    NSInteger _resetStales;
    NSInteger _totalShares;
    NSInteger _totalStales;
    NSTimeInterval _lastShare;
    NSInteger _blocksFound;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, assign) double hashRate;
@property (nonatomic, assign) NSInteger roundShares;
@property (nonatomic, assign) NSInteger roundStales;
@property (nonatomic, assign) NSInteger resetShares;
@property (nonatomic, assign) NSInteger resetStales;
@property (nonatomic, assign) NSInteger totalShares;
@property (nonatomic, assign) NSInteger totalStales;
@property (nonatomic, assign) NSTimeInterval lastShare;
@property (nonatomic, assign) NSInteger blocksFound;

- (id)initWithName:(NSString *)__name
          hashRate:(double)__hashRate
       roundShares:(NSInteger)__roundShares
       roundStales:(NSInteger)__roundStales
       resetShares:(NSInteger)__resetShares
       resetStales:(NSInteger)__resetStales
       totalShares:(NSInteger)__totalShares
       totalStales:(NSInteger)__totalStales
         lastShare:(NSTimeInterval)__lastShare 
       blocksFound:(NSInteger)__blocksFound;

@end