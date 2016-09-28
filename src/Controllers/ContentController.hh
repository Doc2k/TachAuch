<?hh //strict

    namespace TachAuch\Controllers;


    use Plenty\Plugin\Controller;
    use Plenty\Plugin\Templates\Twig;

    class ContentController extends Controller
    {
        public function sayTach(Twig $twig):string
        {
            return $twig->render('TachAuch::content.tach');
        }
    }
