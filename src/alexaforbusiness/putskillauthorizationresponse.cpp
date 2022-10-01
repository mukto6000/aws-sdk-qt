// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putskillauthorizationresponse.h"
#include "putskillauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutSkillAuthorizationResponse
 * \brief The PutSkillAuthorizationResponse class provides an interace for AlexaForBusiness PutSkillAuthorization responses.
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
 * \sa AlexaForBusinessClient::putSkillAuthorization
 */

/*!
 * Constructs a PutSkillAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
PutSkillAuthorizationResponse::PutSkillAuthorizationResponse(
        const PutSkillAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new PutSkillAuthorizationResponsePrivate(this), parent)
{
    setRequest(new PutSkillAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSkillAuthorizationRequest * PutSkillAuthorizationResponse::request() const
{
    Q_D(const PutSkillAuthorizationResponse);
    return static_cast<const PutSkillAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness PutSkillAuthorization \a response.
 */
void PutSkillAuthorizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSkillAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::PutSkillAuthorizationResponsePrivate
 * \brief The PutSkillAuthorizationResponsePrivate class provides private implementation for PutSkillAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutSkillAuthorizationResponsePrivate object with public implementation \a q.
 */
PutSkillAuthorizationResponsePrivate::PutSkillAuthorizationResponsePrivate(
    PutSkillAuthorizationResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness PutSkillAuthorization response element from \a xml.
 */
void PutSkillAuthorizationResponsePrivate::parsePutSkillAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSkillAuthorizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
