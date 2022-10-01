// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontactresponse.h"
#include "createcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateContactResponse
 * \brief The CreateContactResponse class provides an interace for AlexaForBusiness CreateContact responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::createContact
 */

/*!
 * Constructs a CreateContactResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContactResponse::CreateContactResponse(
        const CreateContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateContactResponsePrivate(this), parent)
{
    setRequest(new CreateContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContactRequest * CreateContactResponse::request() const
{
    Q_D(const CreateContactResponse);
    return static_cast<const CreateContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateContact \a response.
 */
void CreateContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateContactResponsePrivate
 * \brief The CreateContactResponsePrivate class provides private implementation for CreateContactResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateContactResponsePrivate object with public implementation \a q.
 */
CreateContactResponsePrivate::CreateContactResponsePrivate(
    CreateContactResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateContact response element from \a xml.
 */
void CreateContactResponsePrivate::parseCreateContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
