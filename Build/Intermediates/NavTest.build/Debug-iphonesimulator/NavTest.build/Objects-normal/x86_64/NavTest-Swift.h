// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;
@class NSURL;
@class NSManagedObjectModel;
@class NSPersistentStoreCoordinator;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC7NavTest11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
@property (nonatomic, strong) NSURL * __nonnull applicationDocumentsDirectory;
@property (nonatomic, strong) NSManagedObjectModel * __nonnull managedObjectModel;
@property (nonatomic, strong) NSPersistentStoreCoordinator * __nonnull persistentStoreCoordinator;
@property (nonatomic, strong) NSManagedObjectContext * __nonnull managedObjectContext;
- (void)saveContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerAnimatedTransitioning;
@class UIPercentDrivenInteractiveTransition;
@class UINavigationController;
@class UIPanGestureRecognizer;
@class UIViewController;
@protocol UIViewControllerInteractiveTransitioning;
@class UIGestureRecognizer;

SWIFT_CLASS("_TtC7NavTest16GestureCollector")
@interface GestureCollector : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate>
@property (nonatomic, weak) UINavigationController * __null_unspecified navigationController;
@property (nonatomic, strong) id <UIViewControllerAnimatedTransitioning> __null_unspecified pushAnimator;
@property (nonatomic, strong) id <UIViewControllerAnimatedTransitioning> __null_unspecified popAnimator;
@property (nonatomic, strong) UIPercentDrivenInteractiveTransition * __nullable interactionController;
@property (nonatomic, weak) id <UIViewControllerAnimatedTransitioning> __null_unspecified animator;
- (nonnull instancetype)initWithNav:(UINavigationController * __nonnull)nav pushAnimator:(id <UIViewControllerAnimatedTransitioning> __nonnull)pushAnimator popAnimator:(id <UIViewControllerAnimatedTransitioning> __nonnull)popAnimator OBJC_DESIGNATED_INITIALIZER;
- (void)addToNavigationView;
- (void)gestureFired:(UIPanGestureRecognizer * __nonnull)recognizer;
- (id <UIViewControllerAnimatedTransitioning> __nullable)animatorWithAnimationControllerForOperation:(UINavigationControllerOperation)operation fromViewController:(UIViewController * __nonnull)fromVC toViewController:(UIViewController * __nonnull)toVC;
- (id <UIViewControllerAnimatedTransitioning> __nullable)navigationController:(UINavigationController * __nonnull)navigationController animationControllerForOperation:(UINavigationControllerOperation)operation fromViewController:(UIViewController * __nonnull)fromVC toViewController:(UIViewController * __nonnull)toVC;
- (id <UIViewControllerInteractiveTransitioning> __nullable)navigationController:(UINavigationController * __nonnull)navigationController interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning> __nonnull)animationController;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * __nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * __nonnull)otherGestureRecognizer;
@end

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC7NavTest24NavigationViewController")
@interface NavigationViewController : UINavigationController
@property (nonatomic, strong) GestureCollector * __nullable gestureCollector;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNavigationBarClass:(Class __nullable)navigationBarClass toolbarClass:(Class __nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRootViewController:(UIViewController * __nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC7NavTest16PopRightAnimator")
@interface PopRightAnimator : NSObject <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)context;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest14PopTopAnimator")
@interface PopTopAnimator : NSObject <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)context;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest18PushBottomAnimator")
@interface PushBottomAnimator : NSObject <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)context;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest32PushBottomPopTopGestureNavigator")
@interface PushBottomPopTopGestureNavigator : GestureCollector
- (void)gestureFired:(UIPanGestureRecognizer * __nonnull)recognizer;
- (nonnull instancetype)initWithNav:(UINavigationController * __nonnull)nav pushAnimator:(id <UIViewControllerAnimatedTransitioning> __nonnull)pushAnimator popAnimator:(id <UIViewControllerAnimatedTransitioning> __nonnull)popAnimator OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest16PushLeftAnimator")
@interface PushLeftAnimator : NSObject <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)context;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest24PushLeftGestureNavigator")
@interface PushLeftGestureNavigator : GestureCollector
- (void)gestureFired:(UIPanGestureRecognizer * __nonnull)recognizer;
- (nonnull instancetype)initWithNav:(UINavigationController * __nonnull)nav pushAnimator:(id <UIViewControllerAnimatedTransitioning> __nonnull)pushAnimator popAnimator:(id <UIViewControllerAnimatedTransitioning> __nonnull)popAnimator OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest17ViewControllerPop")
@interface ViewControllerPop : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest18ViewControllerPush")
@interface ViewControllerPush : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest21ViewControllerPushPop")
@interface ViewControllerPushPop : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop