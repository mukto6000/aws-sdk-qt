// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappinstanceadminresponse.h"
#include "describeappinstanceadminresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceAdminResponse
 * \brief The DescribeAppInstanceAdminResponse class provides an interace for ChimeSdkIdentity DescribeAppInstanceAdmin responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::describeAppInstanceAdmin
 */

/*!
 * Constructs a DescribeAppInstanceAdminResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppInstanceAdminResponse::DescribeAppInstanceAdminResponse(
        const DescribeAppInstanceAdminRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new DescribeAppInstanceAdminResponsePrivate(this), parent)
{
    setRequest(new DescribeAppInstanceAdminRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppInstanceAdminRequest * DescribeAppInstanceAdminResponse::request() const
{
    Q_D(const DescribeAppInstanceAdminResponse);
    return static_cast<const DescribeAppInstanceAdminRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity DescribeAppInstanceAdmin \a response.
 */
void DescribeAppInstanceAdminResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppInstanceAdminResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceAdminResponsePrivate
 * \brief The DescribeAppInstanceAdminResponsePrivate class provides private implementation for DescribeAppInstanceAdminResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DescribeAppInstanceAdminResponsePrivate object with public implementation \a q.
 */
DescribeAppInstanceAdminResponsePrivate::DescribeAppInstanceAdminResponsePrivate(
    DescribeAppInstanceAdminResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity DescribeAppInstanceAdmin response element from \a xml.
 */
void DescribeAppInstanceAdminResponsePrivate::parseDescribeAppInstanceAdminResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppInstanceAdminResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
