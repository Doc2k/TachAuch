<?hh //strict

    namespace TachAuch\Providers;


    use Plenty\Plugin\ServiceProvider;

    class TachAuchServiceProvider extends ServiceProvider
    {

        /**
         * Register the service provider.
         */

        public function register():void
        {
          $this->getApplication()->register(TachAuchRouteServiceProvider::class);
        }
    }
