package ifelsenaarinterface;

public class GumGereedschap implements IGereedschap{
    @Override
    public void pasGereedschaptoe(TekenApp app) {
        for (int i = app.figurenLijst.size() - 1; i >= 0; i--) {
            Figuur fig = app.figurenLijst.get(i);
            if (fig.isMuisBinnen(app.mouseX, app.mouseY, app)) {
                app.figurenLijst.remove(i);
            }
        }
    }
}
