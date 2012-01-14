//QPBlockKeeper.h

#import <Foundation/Foundation.h>

typedef void (^BlockKeeperBlock)(NSMutableDictionary *d);

@interface QPBlockKeeper : NSObject

@property (readwrite, copy) BlockKeeperBlock paramBlock;
@property (nonatomic, retain) NSMutableDictionary *executionParams;

- (void)executeWithParameters:(NSMutableDictionary *)d;
- (void)executeWithDefaultParameters;

@end
