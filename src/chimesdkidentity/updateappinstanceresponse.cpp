// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappinstanceresponse.h"
#include "updateappinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceResponse
 * \brief The UpdateAppInstanceResponse class provides an interace for ChimeSdkIdentity UpdateAppInstance responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::updateAppInstance
 */

/*!
 * Constructs a UpdateAppInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppInstanceResponse::UpdateAppInstanceResponse(
        const UpdateAppInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new UpdateAppInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateAppInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppInstanceRequest * UpdateAppInstanceResponse::request() const
{
    Q_D(const UpdateAppInstanceResponse);
    return static_cast<const UpdateAppInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity UpdateAppInstance \a response.
 */
void UpdateAppInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceResponsePrivate
 * \brief The UpdateAppInstanceResponsePrivate class provides private implementation for UpdateAppInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a UpdateAppInstanceResponsePrivate object with public implementation \a q.
 */
UpdateAppInstanceResponsePrivate::UpdateAppInstanceResponsePrivate(
    UpdateAppInstanceResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity UpdateAppInstance response element from \a xml.
 */
void UpdateAppInstanceResponsePrivate::parseUpdateAppInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
