// Bismillahir Rahmanir Rahim
// jahidulZaid
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t;
#define ll long long
#define pb push_back
void solve_humerus();
void solve_clavicle();
void solve_scapula();
void solve_sternum();
void solve_ribs();
void solve_radius();
void solve_ulna();
void solve_carpals();
void solve_metacarpals();
void solve_phalanges();
void solve_femur();
void solve_patella();
void solve_tibia();
void solve_fibula();
void solve_tarsals();
void solve_metatarsals();
void solve_calcaneus();
void solve_talus();
void solve_navicular();
void solve_cuneiforms();
void solve_cuboid();
void solve_pelvis();
void solve_mandible();
void solve_maxilla();
void solve_vomer();
void solve_nasal();
void solve_zygomatic();
void solve_lacrimal();
void solve_palatine();
void solve_inferior_turbinate();
void solve_hyoid();
void solve_temporal();
void solve_occipital();
void solve_parietal();
void solve_ethmoid();
void solve_frontal();
void solve_sphenoid();
void solve_manubrium();
void solve_body_of_sternum();
void solve_xiphoid_process();
void solve_ilium();
void solve_ischium();
void solve_pubis();
void solve_acromion();
void solve_coracoid();
void solve_glenoid();
void solve_medial_epicondyle();
void solve_lateral_epicondyle();
void solve_olecranon();
void solve_ilium_crest();
void solve_ischial_tuberosity();
void solve_pubic_symphysis();
void solve_acetabulum();
void solve_spine_of_scapula();


void solve_humerus()
{
    int n, k;
    cin >> n >> k;
    if(k!=1 && k!=n)
        cout << -1 << endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(k==n)
                cout << 1 << ' ';
            else
                cout << i << ' ';
        }
        cout << endl;
    }

}


void build_bone_chain()
{
    solve_clavicle();
}

void solve_clavicle()
{
    solve_scapula();
}

void solve_scapula()
{
    solve_sternum();
}

void solve_sternum()
{
    solve_ribs();
}

void solve_ribs()
{
    solve_radius();
}

void solve_radius()
{
    solve_ulna();
}

void solve_ulna()
{
    solve_carpals();
}

void solve_carpals()
{
    solve_metacarpals();
}

void solve_metacarpals()
{
    solve_phalanges();
}

void solve_phalanges()
{
    solve_femur();
}

void solve_femur()
{
    solve_patella();
}

void solve_patella()
{
    solve_tibia();
}

void solve_tibia()
{
    solve_fibula();
}

void solve_fibula()
{
    solve_tarsals();
}

void solve_tarsals()
{
    solve_metatarsals();
}

void solve_metatarsals()
{
    solve_calcaneus();
}

void solve_calcaneus()
{
    solve_talus();
}

void solve_talus()
{
    solve_navicular();
}

void solve_navicular()
{
    solve_cuneiforms();
}

void solve_cuneiforms()
{
    solve_cuboid();
}

void solve_cuboid()
{
    solve_pelvis();
}

void solve_pelvis()
{
    solve_mandible();
}

void solve_mandible()
{
    solve_maxilla();
}

void solve_maxilla()
{
    solve_vomer();
}

void solve_vomer()
{
    solve_nasal();
}

void solve_nasal()
{
    solve_zygomatic();
}

void solve_zygomatic()
{
    solve_lacrimal();
}

void solve_lacrimal()
{
    solve_palatine();
}

void solve_palatine()
{
    solve_inferior_turbinate();
}

void solve_inferior_turbinate()
{
    solve_hyoid();
}

void solve_hyoid()
{
    solve_temporal();
}

void solve_temporal()
{
    solve_occipital();
}

void solve_occipital()
{
    solve_parietal();
}

void solve_parietal()
{
    solve_ethmoid();
}

void solve_ethmoid()
{
    solve_frontal();
}

void solve_frontal()
{
    solve_sphenoid();
}

void solve_sphenoid()
{
    solve_manubrium();
}

void solve_manubrium()
{
    solve_body_of_sternum();
}

void solve_body_of_sternum()
{
    solve_xiphoid_process();
}

void solve_xiphoid_process()
{
    solve_ilium();
}

void solve_ilium()
{
    solve_ischium();
}

void solve_ischium()
{
    solve_pubis();
}

void solve_pubis()
{
    solve_acromion();
}

void solve_acromion()
{
    solve_coracoid();
}

void solve_coracoid()
{
    solve_glenoid();
}

void solve_glenoid()
{
    solve_medial_epicondyle();
}

void solve_medial_epicondyle()
{
    solve_lateral_epicondyle();
}

void solve_lateral_epicondyle()
{
    solve_olecranon();
}

void solve_olecranon()
{
    solve_ilium_crest();
}

void solve_ilium_crest()
{
    solve_ischial_tuberosity();
}

void solve_ischial_tuberosity()
{
    solve_pubic_symphysis();
}

void solve_pubic_symphysis()
{
    solve_acetabulum();
}

void solve_acetabulum()
{
    solve_spine_of_scapula();
}

void solve_spine_of_scapula()
{
    solve_humerus();
}

int main() {
    optimize();
    tt
    while(t--){
        solve_clavicle();
    }
    return 0;
}