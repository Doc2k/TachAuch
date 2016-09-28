<?hh //strict

    namespace TachAuch\Providers;


    use Plenty\Plugin\RouteServiceProvider;
    use Plenty\Plugin\Routing\Router;

    class TachAuchRouteServiceProvider extends RouteServiceProvider
    {
        public function map(Router $router):void
        {
          $router->get('tach','TachAuch\Controllers\ContentController@sayTach');
        }
    }
