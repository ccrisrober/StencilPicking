#version 430

out vec4 ourColor;

in vec3 outPosition;
in vec3 outNormal;
in vec2 outUV;

uniform sampler2D texImage;

const vec3 LightPosition = vec3(0, 0, 0);
const vec3 LightIntensity = vec3(1.0);

uniform bool selected;

uniform vec4 Kd;

vec3 iluminati( ) {
	vec3 s = normalize( LightPosition.xyz - outPosition );
	vec3 n = normalize(outNormal);
	if (!gl_FrontFacing) {
		n = -n;
	}
	vec3 color = Kd.rgb; //texture(texImage, outUV).rgb;
	return LightIntensity * ( color * max( dot(s, n), 0.0 ) );
}

void main() {
	if(!selected) {
		ourColor = vec4(iluminati(), 1.0);
	} else {
		ourColor = vec4(Kd.rgb, 1.0);
	}
}