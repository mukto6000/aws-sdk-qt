// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateskillgroupresponse.h"
#include "updateskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateSkillGroupResponse
 * \brief The UpdateSkillGroupResponse class provides an interace for AlexaForBusiness UpdateSkillGroup responses.
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
 * \sa AlexaForBusinessClient::updateSkillGroup
 */

/*!
 * Constructs a UpdateSkillGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSkillGroupResponse::UpdateSkillGroupResponse(
        const UpdateSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateSkillGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateSkillGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSkillGroupRequest * UpdateSkillGroupResponse::request() const
{
    Q_D(const UpdateSkillGroupResponse);
    return static_cast<const UpdateSkillGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness UpdateSkillGroup \a response.
 */
void UpdateSkillGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSkillGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateSkillGroupResponsePrivate
 * \brief The UpdateSkillGroupResponsePrivate class provides private implementation for UpdateSkillGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateSkillGroupResponsePrivate object with public implementation \a q.
 */
UpdateSkillGroupResponsePrivate::UpdateSkillGroupResponsePrivate(
    UpdateSkillGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness UpdateSkillGroup response element from \a xml.
 */
void UpdateSkillGroupResponsePrivate::parseUpdateSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSkillGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
