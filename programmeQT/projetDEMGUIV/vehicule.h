
#ifndef VEHICULE_H
#define VEHICULE_H

#include <QString>
#include <QVector>
#include "agence.h"
#include "ficheDeSuivi.h"
using namespace std;

class Agence;
class FicheDeSuivi;

/**
  * class vehicule
  * 
  */

class Vehicule
{
private:

  int vehId;
  QString vehImmat;
  QString vehDateMiseCirculation;
  float vehVolumeUtile;
  bool vehHayon;
  bool vehCouchette;
  int vehNbPlaceCabine;
  QString vehType;
  QString vehPTAC;
  int vehFreqEntretien;
  Agence* vehAgence;
  QVector<FicheDeSuivi*> vectFicheDeSuivi;

  void initAttributes ( ) ;

public:

  /**
   * Empty Constructor
   */
  Vehicule ( );

  /**
   * Empty Destructor
   */
  virtual ~Vehicule ( );

  /**
   * Set the value of vehId
   * @param new_var the new value of vehId
   */
  void setVehId ( int new_var );

  /**
   * Get the value of vehId
   * @return the value of vehId
   */
  int getVehId ( );

  /**
   * Set the value of vehImmat
   * @param new_var the new value of vehImmat
   */
  void setVehImmat ( QString new_var );

  /**
   * Get the value of vehImmat
   * @return the value of vehImmat
   */
  QString getVehImmat ( );

  /**
   * Set the value of vehDateMiseCirculation
   * @param new_var the new value of vehDateMiseCirculation
   */
  void setVehDateMiseCirculation ( QString new_var );

  /**
   * Get the value of vehDateMiseCirculation
   * @return the value of vehDateMiseCirculation
   */
  QString getVehDateMiseCirculation ( );

  /**
   * Set the value of vehVolumeUtile
   * @param new_var the new value of vehVolumeUtile
   */
  void setVehVolumeUtile ( float new_var );

  /**
   * Get the value of vehVolumeUtile
   * @return the value of vehVolumeUtile
   */
  float getVehVolumeUtile ( );

  /**
   * Set the value of vehHayon
   * @param new_var the new value of vehHayon
   */
  void setVehHayon ( bool new_var );

  /**
   * Get the value of vehHayon
   * @return the value of vehHayon
   */
  bool getVehHayon ( );

  /**
   * Set the value of vehCouchette
   * @param new_var the new value of vehCouchette
   */
  void setVehCouchette ( bool new_var );

  /**
   * Get the value of vehCouchette
   * @return the value of vehCouchette
   */
  bool getVehCouchette ( );

  /**
   * Set the value of vehNbPlaceCabine
   * @param new_var the new value of vehNbPlaceCabine
   */
  void setVehNbPlaceCabine ( int new_var );

  /**
   * Get the value of vehNbPlaceCabine
   * @return the value of vehNbPlaceCabine
   */
  int getVehNbPlaceCabine ( );

  /**
   * Set the value of vehType
   * @param new_var the new value of vehType
   */
  void setVehType ( QString new_var );

  /**
   * Get the value of vehType
   * @return the value of vehType
   */
  QString getVehType ( );

  /**
   * Set the value of vehPTAC
   * @param new_var the new value of vehPTAC
   */
  void setVehPTAC ( QString new_var );

  /**
   * Get the value of vehPTAC
   * @return the value of vehPTAC
   */
  QString getVehPTAC ( );

  /**
   * Set the value of vehFreqEntretien
   * @param new_var the new value of vehFreqEntretien
   */
  void setVehFreqEntretien ( int new_var );

  /**
   * Get the value of vehFreqEntretien
   * @return the value of vehFreqEntretien
   */
  int getVehFreqEntretien ( );

  /**
   * Set the value of vehAgence
   * @param new_var the new value of vehAgence
   */
  void setVehAgence ( Agence* new_var );

  /**
   * Get the value of vehAgence
   * @return the value of vehAgence
   */
  Agence* getVehAgence ( );

  /**
   * Set the value of vectFicheDeSuivi
   * @param new_var the new value of vectFicheDeSuivi
   */
  void setVectFicheDeSuivi ( QVector<FicheDeSuivi*> new_var );

  /**
   * Get the value of vectFicheDeSuivi
   * @return the value of vectFicheDeSuivi
   */
  QVector<FicheDeSuivi*> getVectFicheDeSuivi ( );

};

#endif // VEHICULE_H
