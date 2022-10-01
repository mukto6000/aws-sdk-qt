// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteregistrypolicyresponse.h"
#include "deleteregistrypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DeleteRegistryPolicyResponse
 * \brief The DeleteRegistryPolicyResponse class provides an interace for Ecr DeleteRegistryPolicy responses.
 *
 * \inmodule QtAwsEcr
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 * 
 *  images>
 * 
 *  Amazon ECR has service endpoints in each supported Region. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR endpoints</a> in the <i>Amazon Web Services
 *  General
 *
 * \sa EcrClient::deleteRegistryPolicy
 */

/*!
 * Constructs a DeleteRegistryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRegistryPolicyResponse::DeleteRegistryPolicyResponse(
        const DeleteRegistryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new DeleteRegistryPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRegistryPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRegistryPolicyRequest * DeleteRegistryPolicyResponse::request() const
{
    Q_D(const DeleteRegistryPolicyResponse);
    return static_cast<const DeleteRegistryPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr DeleteRegistryPolicy \a response.
 */
void DeleteRegistryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRegistryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::DeleteRegistryPolicyResponsePrivate
 * \brief The DeleteRegistryPolicyResponsePrivate class provides private implementation for DeleteRegistryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DeleteRegistryPolicyResponsePrivate object with public implementation \a q.
 */
DeleteRegistryPolicyResponsePrivate::DeleteRegistryPolicyResponsePrivate(
    DeleteRegistryPolicyResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr DeleteRegistryPolicy response element from \a xml.
 */
void DeleteRegistryPolicyResponsePrivate::parseDeleteRegistryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRegistryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
