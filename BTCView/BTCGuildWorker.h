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

@property (nonatomic, retain, readonly) NSString *name;
@property (nonatomic, readonly) double hashRate;
@property (nonatomic, readonly) NSInteger roundShares;
@property (nonatomic, readonly) NSInteger roundStales;
@property (nonatomic, readonly) NSInteger resetShares;
@property (nonatomic, readonly) NSInteger resetStales;
@property (nonatomic, readonly) NSInteger totalShares;
@property (nonatomic, readonly) NSInteger totalStales;
@property (nonatomic, readonly) NSTimeInterval lastShare;
@property (nonatomic, readonly) NSInteger blocksFound;

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

@interface BTCGuildWorker (Modifiers)

- (void)setName:(NSString *)value;
- (void)setHashRate:(double)value;
- (void)setRoundShares:(NSInteger)value;
- (void)setRoundStales:(NSInteger)value;
- (void)setResetShares:(NSInteger)value;
- (void)setResetStales:(NSInteger)value;
- (void)setTotalShares:(NSInteger)value;
- (void)setTotalStales:(NSInteger)value;
- (void)setLastShare:(NSTimeInterval)value;
- (void)setBlocksFound:(NSInteger)value;

@end