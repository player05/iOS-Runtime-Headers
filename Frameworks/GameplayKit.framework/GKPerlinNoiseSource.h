/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKPerlinNoiseSource : GKCoherentNoiseSource {
    double  _persistence;
}

@property (nonatomic) double persistence;

+ (id)perlinNoiseSourceWithFrequency:(double)arg1 octaveCount:(int)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;

- (struct Module { int (**x1)(); struct Module {} **x2; }*)__newModule;
- (id)init;
- (id)initWithFrequency:(double)arg1 octaveCount:(int)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;
- (double)persistence;
- (void)setPersistence:(double)arg1;

@end