
precision highp float;
uniform sampler2D Texture;
varying vec2 TextureCoordsVarying;

void main (void) {

    vec2 uv =TextureCoordsVarying.xy;
    if (uv.y>=0.0 && uv.y<=1.0/3.0) {
        uv.y+=1.0/3.0;
    }else if (uv.y>2.0/3.0) {
        uv.y-=1.0/3.0;
    }
    gl_FragColor = texture2D(Texture, uv);
}

