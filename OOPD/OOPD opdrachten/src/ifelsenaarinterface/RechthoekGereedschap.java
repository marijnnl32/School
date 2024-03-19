package ifelsenaarinterface;

public class RechthoekGereedschap implements IGereedschap {
    @Override
    public void pasGereedschaptoe(TekenApp app) {
        Rechthoek r = new Rechthoek(app.mouseX, app.mouseY, 50, 50);
        app.figurenLijst.add(r);
    }
}
