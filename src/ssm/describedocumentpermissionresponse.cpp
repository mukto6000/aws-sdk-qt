// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedocumentpermissionresponse.h"
#include "describedocumentpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::DescribeDocumentPermissionResponse
 * \brief The DescribeDocumentPermissionResponse class provides an interace for Ssm DescribeDocumentPermission responses.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::describeDocumentPermission
 */

/*!
 * Constructs a DescribeDocumentPermissionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDocumentPermissionResponse::DescribeDocumentPermissionResponse(
        const DescribeDocumentPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new DescribeDocumentPermissionResponsePrivate(this), parent)
{
    setRequest(new DescribeDocumentPermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDocumentPermissionRequest * DescribeDocumentPermissionResponse::request() const
{
    Q_D(const DescribeDocumentPermissionResponse);
    return static_cast<const DescribeDocumentPermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm DescribeDocumentPermission \a response.
 */
void DescribeDocumentPermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDocumentPermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::DescribeDocumentPermissionResponsePrivate
 * \brief The DescribeDocumentPermissionResponsePrivate class provides private implementation for DescribeDocumentPermissionResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a DescribeDocumentPermissionResponsePrivate object with public implementation \a q.
 */
DescribeDocumentPermissionResponsePrivate::DescribeDocumentPermissionResponsePrivate(
    DescribeDocumentPermissionResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm DescribeDocumentPermission response element from \a xml.
 */
void DescribeDocumentPermissionResponsePrivate::parseDescribeDocumentPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDocumentPermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws
