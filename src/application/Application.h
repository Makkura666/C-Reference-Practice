/**
 * Application.h
 * Contributors:
 *  * Jens Ackou
 * Description:
 *  Application branching point
 */

#ifndef APPLICATION
#define APPLICATION

class Application
{
public:

  Application();
  void        intro(const char *className,
                    const char *classDescription) const;
  virtual int run() const;
};

#endif /* ifndef APPLICATION */
